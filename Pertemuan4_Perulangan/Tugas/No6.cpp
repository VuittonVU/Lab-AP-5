#include <iostream>
#include <cmath> //library utk perpangkatan
using namespace std;

int main() {

    int n;
    int total;
    char ulang;

    //perulangan label
    x :

    total = 0;

        system("cls");
    
    //perulangan label untuk inputan invalid
    y:

    cout << "=======================================================" << endl;
    cout << "Masukkan batas perhitungan: ";
    cin >> n;

        while((n < -100000) || (n > 4009)) //batas int hanya sampai pertambahan perpangkatan bilangan genap sebanyak 4009
        {
            cout << "Inputan Invalid, silahkan masukkan lagi" << endl;
            goto y;
        }
    
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            total = total + pow(i,2);

        } else
            {
                continue;
            }
    }

    cout << "Total: " << total;

    cout << endl << endl;
    cout << "Apakah Anda ingin mengulang program (Y/T) ? ";
    cin >> ulang;
    ulang = toupper(ulang);

    if (ulang == 'Y')
    {
        goto x;
    }

    cout << "Terima kasih telah memakai program ini " << endl;
    cout << "=======================================================" << endl;

    return 0;
}