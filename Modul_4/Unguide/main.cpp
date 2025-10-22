//Nama : Afief Amar Purnomo
//NIM : 103112430067

#include <iostream>
#include "Playlist.h"
using namespace std;

int main() {
    Playlist L;
    createPlaylist(L);

    Lagu lagu1 = {"Hati-Hati di Jalan", "Tulus", 4.2};
    Lagu lagu2 = {"Sial", "Mahalini", 3.8};

    insertLast(L, alokasi(lagu1));
    insertLast(L, alokasi(lagu2));

    int pilihan;
    do {
        cout << "==============================" << endl;
        cout << "     MENU PLAYLIST LAGU" << endl;
        cout << "==============================" << endl;
        cout << "1. Tambah lagu di awal playlist" << endl;
        cout << "2. Tambah lagu di akhir playlist" << endl;
        cout << "3. Tambah lagu setelah playlist ke-3" << endl;
        cout << "4. Hapus lagu berdasarkan judul" << endl;
        cout << "5. Tampilkan seluruh lagu" << endl;
        cout << "0. Keluar" << endl;
        cout << "==============================" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1 || pilihan == 2 || pilihan == 3) {
            Lagu laguBaru;
            cout << "Masukkan judul lagu: ";
            getline(cin, laguBaru.judul);
            cout << "Masukkan nama penyanyi: ";
            getline(cin, laguBaru.penyanyi);
            cout << "Masukkan durasi lagu (menit): ";
            cin >> laguBaru.durasi;
            cin.ignore();

            Node* P = alokasi(laguBaru);

            if (pilihan == 1) {
                insertFirst(L, P);
            } else if (pilihan == 2) {
                insertLast(L, P);
            } else if (pilihan == 3) {
                insertAfterK(L, P, 3);
            }

            cout << "Lagu berhasil ditambahkan!" << endl << endl;

        } else if (pilihan == 4) {
            string judul;
            cout << "Masukkan judul lagu yang ingin dihapus: ";
            getline(cin, judul);
            deleteByJudul(L, judul);

        } else if (pilihan == 5) {
            printPlaylist(L);

        } else if (pilihan == 0) {
            cout << "Keluar dari program..." << endl;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }

        cout << endl;
    } while (pilihan != 0);

    return 0;
}
