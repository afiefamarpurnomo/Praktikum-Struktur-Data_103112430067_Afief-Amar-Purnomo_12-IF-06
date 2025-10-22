//Nama : Afief Amar Purnomo
//NIM : 103112430067

#include "singlylist.h"

void CreateList(List &L){
    L.first = Nil;
}

address alokasi(infotype x){
    address P = new Elmlist;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P){
    delete P;
    P = Nil;
}

void insertFirst(List &L, address P){
     P->next = L.first;
    L.first = P;
}

void insertLast(List &L, address P){
    if(L.first == Nil){
        insertFirst(L, P);
    } else {
        address Last = L.first;
        while (Last->next != Nil){
            Last = Last->next;
        }
        Last->next = P;
    }
}

void printInfo(List L){
    address P = L.first;
    if (P == NULL) {
        cout << "List kosong" << endl;
    } else {
        while (P != NULL) {
            cout << P->info << " ";
            P = P->next;
        }
        cout << endl;
    }
}