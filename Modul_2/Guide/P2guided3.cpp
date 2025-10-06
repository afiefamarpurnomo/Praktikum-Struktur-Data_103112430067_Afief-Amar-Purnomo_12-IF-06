//Nama : Afief Amar Purnomo
//NIM : 103112430067

/* #include <iostream>
using namespace std;

// Mendeklarasikan prototype fungsi
int maks3(int a, int b, int c);

int main() {
    int x, y, z;
    cout << "Masukkan nilai bilangan ke-1 = ";
    cin >> x;
    cout << "Masukkan nilai bilangan ke-2 = ";
    cin >> y;
    cout << "Masukkan nilai bilangan ke-3 = ";
    cin >> z;

    cout << "Nilai maksimumnya adalah = "
         << maks3(x, y, z);
    return 0;
}

// Badan fungsi
int maks3(int a, int b, int c) {

    int temp_max = a;
    if (b > temp_max)
        temp_max = b;
    if (c > temp_max)
        temp_max = c;
    return temp_max;
} */

#include <iostream>
using namespace std;

// Prototype Prosedur 
void tulis (int x);

int main() {
    int jum;
    cout << "Jumlah baris kata = ";
    cin >> jum;
    tulis(jum);
    return 0;
}

// Badan Prosedur
void tulis(int x) {
    for (int i = 0; i < x; i++) {
        cout << "Baris ke-" << i + 1 << endl;
    }
}