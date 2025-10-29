#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H
#include <iostream>
#include <string>
using namespace std;

struct Kendaraan {
    string nopol;
    string warna;
    int thnbuat;
};

struct ElmList;
typedef ElmList* address;

struct ElmList {
    Kendaraan info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};

void createList(List &L);
address alokasi(Kendaraan x);
void dealokasi(address &p);
void insertFirst(List &L, address P);
void printInfo(List L);
bool isExist(List L, string nopol);
address findElm(List L, string x);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P);

#endif
