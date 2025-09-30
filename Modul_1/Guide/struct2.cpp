//Nama : Afief Amar Purnomo
//NIM : 103112430067

#include <iostream>
#include <string>
using namespace std;

struct mahasiswa
{
    string nama;
    string NIM;
};

int main (){
    mahasiswa mhs;
    // mhs.nama = "Apiep";
    // mhs.NIM = "103112430067";

    cout << "Nama : ";
    getline(cin, mhs.nama);
    cout << "NIM : ";
    cin >> mhs.NIM;

    cout << endl;
    
    cout << "Nama : " << mhs.nama << endl
         << "NIM : " << mhs.NIM << endl;
};

