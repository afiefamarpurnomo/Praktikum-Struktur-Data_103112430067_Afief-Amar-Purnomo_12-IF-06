//Nama : Afief Amar Purnomo
//NIM : 103112430067

#ifndef PLAYLIST_H_INCLUDED
#define PLAYLIST_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

struct Lagu {
    string judul;
    string penyanyi;
    float durasi;
};

struct Node {
    Lagu info;
    Node* next;
};

struct Playlist {
    Node* first;
};

// Deklarasi fungsi
void createPlaylist(Playlist &L);
Node* alokasi(Lagu lagu);
void insertFirst(Playlist &L, Node* P);
void insertLast(Playlist &L, Node* P);
void insertAfterK(Playlist &L, Node* P, int k);
void deleteByJudul(Playlist &L, string judul);
void printPlaylist(Playlist L);

#endif
