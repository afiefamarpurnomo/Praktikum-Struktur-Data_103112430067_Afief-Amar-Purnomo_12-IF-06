//Nama : Afief Amar Purnomo
//NIM : 103112430067

#include <iostream>
using namespace std;

int main() {
    string nama[5];
    float nilai[5][3];
    float rata[5];
    int terbaik = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        cin >> nama[i];
        float total = 0;

        for (int j = 0; j < 3; j++) {
            cout << "  Nilai mata kuliah ke-" << j + 1 << ": ";
            cin >> nilai[i][j];
            total += nilai[i][j];
        }

        rata[i] = total / 3.0;

        if (rata[i] > rata[terbaik]) {
            terbaik = i;
        }
        cout << endl;
    }

    cout << "\n============================================================\n";
    cout << "Nama\t\tNilai1\tNilai2\tNilai3\tRata-rata\n";
    cout << "============================================================\n";
    for (int i = 0; i < 5; i++) {
        cout << nama[i] << "\t\t";
        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << "\t";
        }
        cout << rata[i];
        if (i == terbaik) cout << "  <-- Terbaik";
        cout << endl;
    }

    cout << "============================================================\n";
    cout << "Mahasiswa terbaik: " << nama[terbaik] << " dengan rata-rata " << rata[terbaik] << endl;

    return 0;
}
