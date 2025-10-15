// Nama : Afief Amar Purnomo
// NIM  : 103112430067

#include <iostream>
using namespace std;

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarPosisi(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };

    int *p1, *p2;

    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "\nArray B:" << endl;
    tampilArray(B);

    int baris = 1, kolom = 2; 
    tukarPosisi(A, B, baris, kolom);

    cout << "\nSetelah menukar elemen pada posisi (" << baris << "," << kolom << "):" << endl;
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "\nArray B:" << endl;
    tampilArray(B);

    int x = 100, y = 200;
    p1 = &x;
    p2 = &y;
    cout << "\nSebelum ditukar: x = " << x << ", y = " << y << endl;
    tukarPointer(p1, p2);
    cout << "Setelah ditukar : x = " << x << ", y = " << y << endl;

    return 0;
}
