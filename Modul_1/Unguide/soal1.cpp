//Nama : Afief Amar Purnomo
//NIM : 103112430067

#include <iostream>
using namespace std;

int main() {

float a, b;

cout << "Masukkan bilangan pertama: ";
cin >> a;
cout << "Masukkan bilangan kedua: ";
cin >> b;

cout << "\nHasil Operasi:\n";
cout << "Penjumlahan: " << a + b << endl;
cout << "Pengurangan: " << a - b << endl;
cout << "Perkalian  : " << a * b << endl;

if (b != 0) {
    cout << "Pembagian  : " << a / b << endl;
} else {
    cout << "Pembagian  : Tidak dapat dibagi dengan nol!" << endl;
}
return 0;
}