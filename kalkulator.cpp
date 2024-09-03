#include <iostream>
using namespace std;

int main() { 
    float a,b,hasil;
    char operasi ;
    cout << "Selamat datang di program kalkulator sederhana \n";

    //memilih operasi yang akan dilakukan
    cout << "Masukkan operasi +,-,*,/ : ";
    cin >> operasi;

    if(operasi == '+') {
        cout << "Masukkan angka pertama :";
        cin >> a;
        cout << "Masukkan angka kedua :";
        cin >> b;
        hasil = a + b;
        cout << "hasil dari penjumlahan " << a << operasi << b << " adalah " << hasil;
    }else if (operasi == '-'){
        cout << "Masukkan angka pertama :";
        cin >> a;
        cout << "Masukkan angka kedua :";
        cin >> b;
        hasil = a - b;
        cout << "hasil dari pengurangan " << a << operasi << b << " adalah " << hasil;
    }else if(operasi == '*'){
        cout << "Masukkan angka pertama : ";
        cin >> a;
        cout << "Masukkan angka kedua : ";
        cin >> b;
        hasil = a * b;
        cout << "hasil dari perkalian " << a << operasi << b << " adalah " << hasil;
    }else if ( operasi == '/'){
        cout << "Masukkan angka pertama : ";
        cin >> a;
        cout << "Masukkan angka kedua : ";
        cin >> b;
        hasil = a/b;
        cout << "hasil dari pembagian " << a << operasi << b << " adalah " << hasil;
    }else {
        cout << "operasi yang anda masukkan salah";
    }

    cin.get();
    return 0;
}