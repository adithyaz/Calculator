#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char matematika;

    cout << "Selamat Datang!\n";

    // Masukkan nilai
    cout << "Masukkan nilai Pertama: ";
    cin >> a;
    cout << "Pilih operator +,-,*,/: ";
    cin >> matematika;
    cout << "Masukkan nilai kedua: ";
    cin >> b;

    cout << "\nHasil Perhitungan: ";
    cout << a << matematika << b;
    if (matematika == '+')
    {
        hasil = a + b;
    }
    else if (matematika == '-')
    {
        hasil = a - b;
    }
    else if (matematika == '/')
    {
        hasil = a / b;
    }
    else if (matematika == '*')
    {
        hasil = a * b;
    }
    else
    {
        cout << " Operasi anda salah!" << endl;
    }

    cout << " = " << hasil << endl;

    cin.get();
    return 0;
}