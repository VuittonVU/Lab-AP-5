#include <iostream>
using namespace std;

int main() 
{
    int n;
    char ulang;

    //perulangan label untuk program
    x:

        system("cls");

    //perulangan label untuk inputan invalid
    y:

    cout << "=======================================================" << endl;
    cout << "Masukkan banyak perulangan: ";
    cin >> n;

        while((n < 1) || (n > 10000))
        {
            cout << "Inputan Invalid, silahkan masukkan lagi" << endl;
            goto y;
        }
    cout << "H";

    for (int i = 0; i < n; i++)
    {
        cout << "o";
    }

    cout << "r";

    for (int i = 0; i < n; i++)
    {
        cout << "e";
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << "!";
    }

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