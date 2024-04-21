#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int x = 5;

    while (x > 0)
    {
        cout << "Hello World" << endl;
        x--;
    }

    int angka;

    cout << "Masukkan angka : ";
    cin >> angka;

    while (angka < 0 || angka > 10)
    {
        cout << "Inputan Anda Invalid, silahkan ulangi lagi" << endl;
        cout << "Masukkan angka : ";
        cin >> angka;
    }


    return 0;
}