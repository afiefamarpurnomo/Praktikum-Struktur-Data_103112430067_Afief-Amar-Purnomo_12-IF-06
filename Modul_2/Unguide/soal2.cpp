//Nama : Afief Amar Purnomo
//NIM : 103112430067

#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Masukkan jumlah elemen (N): ";
    cin >> N;

    int *arr = new int[N];
    int *ptr = arr; 

    cout << "Masukkan " << N << " bilangan:\n";
    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    int jumlah = 0;
    int maks = *ptr;
    int min = *ptr;

    for (int i = 0; i < N; i++) {
        jumlah += *(ptr + i);

        if (*(ptr + i) > maks)
            maks = *(ptr + i);
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }

    cout << "\nHasil perhitungan:\n";
    cout << "Jumlah seluruh bilangan = " << jumlah << endl;
    cout << "Nilai maksimum          = " << maks << endl;
    cout << "Nilai minimum           = " << min << endl;

    return 0;
}
