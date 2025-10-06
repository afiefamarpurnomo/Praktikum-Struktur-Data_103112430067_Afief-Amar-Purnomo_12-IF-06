//Nama : Afief Amar Purnomo
//NIM : 103112430067

#include <iostream>
using namespace std;

void tampilkanPola(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah baris (n): ";
    cin >> n;

    cout << "\n=== Pola Segitiga Angka ===\n";
    tampilkanPola(n);

    return 0;
}
