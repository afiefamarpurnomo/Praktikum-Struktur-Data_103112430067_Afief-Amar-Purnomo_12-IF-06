#include "circularlist.h"

void createList(List &L) {
    L.first = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = P;
    P->prev = P;
    return P;
}

void dealokasi(address P) {
    delete P;
}

void insertFirst(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
    } else {
        address last = L.first->prev;
        P->next = L.first;
        P->prev = last;
        last->next = P;
        L.first->prev = P;
        L.first = P;
    }
}

void insertLast(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
    } else {
        address last = L.first->prev;
        last->next = P;
        P->prev = last;
        P->next = L.first;
        L.first->prev = P;
    }
}

void insertAfter(List &L, address Prec, address P) {
    if (Prec != NULL) {
        P->next = Prec->next;
        P->prev = Prec;
        Prec->next->prev = P;
        Prec->next = P;
    }
}

void deleteFirst(List &L, address &P) {
    P = L.first;
    if (L.first->next == L.first) {
        L.first = NULL;
    } else {
        address last = L.first->prev;
        L.first = P->next;
        last->next = L.first;
        L.first->prev = last;
    }
}

void deleteLast(List &L, address &P) {
    address last = L.first->prev;
    P = last;

    if (last == L.first) {
        L.first = NULL;
    } else {
        address beforeLast = last->prev;
        beforeLast->next = L.first;
        L.first->prev = beforeLast;
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    P = Prec->next;
    if (P == L.first) return;

    Prec->next = P->next;
    P->next->prev = Prec;
}

address findElm(List L, infotype x) {
    if (L.first == NULL) return NULL;
    address P = L.first;

    do {
        if (P->info.nim == x.nim)
            return P;
        P = P->next;
    } while (P != L.first);

    return NULL;
}

void printInfo(List L) {
    if (L.first == NULL) return;

    address P = L.first;
    do {
        cout << "Nama : " << P->info.nama << endl;
        cout << "NIM  : " << P->info.nim << endl;
        cout << "L/P  : " << P->info.jenis_kelamin << endl;
        cout << "IPK  : " << P->info.ipk << endl << endl;
        P = P->next;
    } while (P != L.first);
}

address createData(string nama, string nim, char jenis_kelamin, float ipk) {
    infotype x;
    x.nama = nama;
    x.nim = nim;
    x.jenis_kelamin = jenis_kelamin;
    x.ipk = ipk;
    return alokasi(x);
}
