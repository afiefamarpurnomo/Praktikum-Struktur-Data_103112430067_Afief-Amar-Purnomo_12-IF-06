//Nama : Afief Amar Purnomo
//NIM : 103112430067

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka (0-100): ";
    cin >> n;

    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima",
                       "enam", "tujuh", "delapan", "sembilan"};

    if (n < 0 || n > 100) {
        cout << "Angka harus 0 s.d 100\n";
        return 0;
    }

    cout << n << " : ";

    switch (n) {
        case 0:  cout << "nol"; break;
        case 10: cout << "sepuluh"; break;
        case 11: cout << "sebelas"; break;
        case 100: cout << "seratus"; break;
        default:
            if (n < 10) cout << satuan[n];
            else if (n < 20) cout << satuan[n - 10] << " belas";
            else {
                cout << satuan[n / 10] << " puluh";
                if (n % 10 != 0) cout << " " << satuan[n % 10];
            }
    }

    cout << endl;
    return 0;
}
