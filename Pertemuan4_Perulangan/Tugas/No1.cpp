#include <iostream>
using namespace std;

int main() 
{
    int n;
    int bil = 1;

    //perulangan label
    x :

        system("CLS");

    char ulang;

    cout << "=======================================================" << endl;
    cout << "Masukkan batas suku dari deret bilangan: ";
    cin >> n;
    
    //pengecekan batas nilai valid
    while ((n < 0) || (n > 100))
    {
        cout << "=======================================================" << endl;
        cout << "Inputan Anda Invalid ataupun melewati batas(overload)" << endl;
        cout << "Masukkan batas suku dari deret bilangan: ";
        cin >> n;
    }

    //agar selalu menampilkan angka 1 di awal deret
    cout << bil << " ";

    // syarat akhir n-1 dikarenakan angka 1 di awal deret
    for (int i = 1; i <= n-1; i++ )
    {
        if ( i % 2 == 1) //ganjil
        {
            bil+=5;
            cout << bil << " ";
        }

        if ( i % 2 == 0) //genap
        {
            bil+=3;
            cout << bil << " ";
        }
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