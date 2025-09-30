//Nama : Afief Amar Purnomo
//NIM : 103112430067

#include <iostream>
using namespace std;

int main() {

    int hari;
    cout << "Hari 1-7: ";
    cin >> hari;


    if (hari == 7) {
        cout << "Hari minggu\n";
    } else {
        cout << "Hari kerja\n";
    }

    switch (hari) 
    {
    case 7: 
        cout << "Hari minggu" << endl;
        break;
    default:
        cout << "Hari kerja" << endl;
        break;
    }
    
    // int nomer = 10;
    // cout << sizeof(nomer);
    // cout << nomer << endl;
    // cout << nomer++ << endl;
    // cout << ++nomer << endl;
    // cout << "Nama : Apiep\nNIM : 103112430056" << endl;
    return 0;
}