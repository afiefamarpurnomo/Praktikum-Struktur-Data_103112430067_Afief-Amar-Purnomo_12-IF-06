#include "Doublylist.h"

int main() {
    List L;
    createList(L);
    Kendaraan K;
    char lagi;

    do {
        cout << "\nmasukkan nomor polisi : ";
        cin >> K.nopol;

        if (isExist(L, K.nopol)) {
            cout << "nomor polisi sudah terdaftar\n";
        } else {
            cout << "masukkan warna kendaraan : ";
            cin >> K.warna;
            cout << "masukkan tahun kendaraan : ";
            cin >> K.thnbuat;

            address P = alokasi(K);
            insertFirst(L, P);
        }

        cout << "\nTambah data lagi? (y/n): ";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');

    printInfo(L);

    cout << "\n";
    string cari = "D001";
    findElm(L, cari);

    cout << "\n";
    string hapus = "D003";
    cout << "Masukkan Nomor Polisi yang akan dihapus : " << hapus << endl;

    address P = L.first, Prec = NULL;
    bool found = false;

    while (P != NULL) {
        if (P->info.nopol == hapus) {
            found = true;
            break;
        }
        Prec = P;
        P = P->next;
    }

    if (found) {
        address delNode = NULL;
        if (P == L.first) {
            deleteFirst(L, delNode);
        } else if (P == L.last) {
            deleteLast(L, delNode);
        } else {
            deleteAfter(Prec, delNode);
        }
        cout << "Data dengan nomor polisi " << hapus << " berhasil dihapus.\n";
        dealokasi(delNode);
    } else {
        cout << "Data tidak ditemukan.\n";
    }

    printInfo(L);

    return 0;
}