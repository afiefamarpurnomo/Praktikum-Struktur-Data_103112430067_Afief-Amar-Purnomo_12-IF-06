//Nama : Afief Amar Purnomo
//NIM : 103112430067

#include "Playlist.h"

void createPlaylist(Playlist &L) {
    L.first = nullptr;
}

Node* alokasi(Lagu lagu) {
    Node* P = new Node;
    P->info = lagu;
    P->next = nullptr;
    return P;
}

void insertFirst(Playlist &L, Node* P) {
    P->next = L.first;
    L.first = P;
}

void insertLast(Playlist &L, Node* P) {
    if (L.first == nullptr) {
        L.first = P;
    } else {
        Node* Q = L.first;
        while (Q->next != nullptr) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void insertAfterK(Playlist &L, Node* P, int k) {
    if (L.first == nullptr) {
        L.first = P;
        return;
    }

    Node* Q = L.first;
    int count = 1;
    while (Q != nullptr && count < k) {
        Q = Q->next;
        count++;
    }

    if (Q == nullptr) {
        cout << "Posisi ke-" << k << " tidak ditemukan. Lagu ditambahkan di akhir." << endl;
        insertLast(L, P);
    } else {
        P->next = Q->next;
        Q->next = P;
    }
}

void deleteByJudul(Playlist &L, string judul) {
    if (L.first == nullptr) {
        cout << "Playlist kosong." << endl;
        return;
    }

    Node *P = L.first, *prev = nullptr;
    while (P != nullptr && P->info.judul != judul) {
        prev = P;
        P = P->next;
    }

    if (P == nullptr) {
        cout << "Lagu dengan judul \"" << judul << "\" tidak ditemukan." << endl;
        return;
    }

    if (prev == nullptr) {
        L.first = P->next;
    } else {
        prev->next = P->next;
    }

    delete P;
    cout << "Lagu \"" << judul << "\" berhasil dihapus." << endl;
}

void printPlaylist(Playlist L) {
    if (L.first == nullptr) {
        cout << "Playlist kosong." << endl;
        return;
    }

    Node* P = L.first;
    int i = 1;
    cout << "\nDaftar Lagu dalam Playlist:\n";
    while (P != nullptr) {
        cout << i << ". Judul: " << P->info.judul
             << ", Penyanyi: " << P->info.penyanyi
             << ", Durasi: " << P->info.durasi << " menit" << endl;
        P = P->next;
        i++;
    }
    cout << endl;
}
