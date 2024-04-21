#include <iostream>
using namespace std;

//function menentukan angka prima atau komposit
int penentuan(int n)
{
    bool prima;

    if (n <= 1)
    {
        return prima = false;
    } 
        
    for (int i = 2; i <= n/2; i++)
    {   
        if (n % i == 0 )
        {
            return prima = false;
            break;
        }    
    }   
        
    return prima = true;
}

//main function
int main() {

    //perulangan label untuk program
    x:

    int n;
    bool prima;
    char ulang;

        system("cls");
    
    //perulangan label untuk inputan invalid
    y:

    cout << "=======================================================" << endl;
    cout << "Masukkan angka: ";
    cin >> n;
    
        while((n < -100000) || (n > 10000))
        {
            cout << "Inputan Invalid, silahkan masukkan lagi" << endl;
            goto y;
        }

    prima = penentuan(n);

    if (prima == true)
    {
        cout << n << " bilangan prima";

    } else
        {
            cout << n << " bukan bilangan prima";
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