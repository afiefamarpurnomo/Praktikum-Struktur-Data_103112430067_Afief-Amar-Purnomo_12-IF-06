// Nama : Afief Amar Purnomo
// NIM  : 103112430067

#include <iostream>
#include "pelajaran.h"
using namespace std;

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran p;
    p.namaMapel = namapel;
    p.kodeMapel = kodepel;
    return p;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "Nama Pelajaran : " << pel.namaMapel << endl;
    cout << "Kode Pelajaran : " << pel.kodeMapel << endl;
}
