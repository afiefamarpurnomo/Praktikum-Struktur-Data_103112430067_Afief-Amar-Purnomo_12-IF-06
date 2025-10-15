// Nama : Afief Amar Purnomo
// NIM  : 103112430067

#include <iostream>
#include <string>
using namespace std;

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    const int MAX = 10;
    string nama[MAX], nim[MAX];
    float uts[MAX], uas[MAX], tugas[MAX], nilaiAkhir[MAX];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa (maks 10): ";
    cin >> jumlah;

    if (jumlah > 10) {
        cout << "Jumlah melebihi batas maksimum!" << endl;
        return 0;
    }

    cout << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << "Data mahasiswa ke-" << i + 1 << endl;
        cout << "Nama   : ";
        cin >> ws;
        getline(cin, nama[i]);
        cout << "NIM    : ";
        cin >> nim[i];
        cout << "Nilai UTS   : ";
        cin >> uts[i];
        cout << "Nilai UAS   : ";
        cin >> uas[i];
        cout << "Nilai Tugas : ";
        cin >> tugas[i];

        nilaiAkhir[i] = hitungNilaiAkhir(uts[i], uas[i], tugas[i]);
        cout << endl;
    }

    cout << "\n=== Data Mahasiswa ===\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama        : " << nama[i] << endl;
        cout << "NIM         : " << nim[i] << endl;
        cout << "Nilai UTS   : " << uts[i] << endl;
        cout << "Nilai UAS   : " << uas[i] << endl;
        cout << "Nilai Tugas : " << tugas[i] << endl;
        cout << "Nilai Akhir : " << nilaiAkhir[i] << endl;
    }

    return 0;
}
