#include "Doublylist.h"

void createList(List &L) {
    L.first = NULL;
    L.last = NULL;
}

address alokasi(Kendaraan x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

void dealokasi(address &p) {
    delete p;
    p = NULL;
}

void insertFirst(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

bool isExist(List L, string nopol) {
    address P = L.first;
    while (P != NULL) {
        if (P->info.nopol == nopol)
            return true;
        P = P->next;
    }
    return false;
}

void printInfo(List L) {
    cout << "\nDATA LIST 1\n";
    address P = L.first;
    while (P != NULL) {
        cout << "Nomor Polisi : " << P->info.nopol << endl;
        cout << "Warna        : " << P->info.warna << endl;
        cout << "Tahun        : " << P->info.thnbuat << endl;
        P = P->next;
    }
}

address findElm(List L, string x) {
    address P = L.first;
    while (P != NULL) {
        if (P->info.nopol == x) {
            cout << "\nMasukkan Nomor Polisi yang dicari : " << x << endl;
            cout << "Nomor Polisi : " << P->info.nopol << endl;
            cout << "Warna        : " << P->info.warna << endl;
            cout << "Tahun        : " << P->info.thnbuat << endl;
            return P;
        }
        P = P->next;
    }
    cout << "Data dengan nomor polisi " << x << " tidak ditemukan.\n";
    return NULL;
}

void deleteFirst(List &L, address &P) {
    if (L.first != NULL) {
        P = L.first;
        if (L.first == L.last) {
            L.first = NULL;
            L.last = NULL;
        } else {
            L.first = P->next;
            L.first->prev = NULL;
            P->next = NULL;
        }
    }
}

void deleteLast(List &L, address &P) {
    if (L.last != NULL) {
        P = L.last;
        if (L.first == L.last) {
            L.first = NULL;
            L.last = NULL;
        } else {
            L.last = P->prev;
            L.last->next = NULL;
            P->prev = NULL;
        }
    }
}

void deleteAfter(address Prec, address &P) {
    if (Prec != NULL && Prec->next != NULL) {
        P = Prec->next;
        Prec->next = P->next;
        if (P->next != NULL)
            P->next->prev = Prec;
        P->next = NULL;
        P->prev = NULL;
    }
}
