#include <iostream>
using namespace std;

int main()
{
    int tahun;
    int n;
    char ulang;

    //perulangan label untuk program
    x: 

    system("cls");
    
    //perulangan label untuk inputan invalid tahun
    y:

    cout << "=======================================================" << endl;
    cout << "Masukkan tahun yang ingin dicek: ";
    cin >> tahun;
    
        while ((tahun < 1000) || (tahun > 9000))
        {
            cout << "Inputan Invalid, silahkan masukkan lagi" << endl;
            goto y;
        }

    //perulangan label untuk inputan invalid panjang interval
    z:

    cout << "Masukkan panjang interval: ";
    cin >> n;

        while ((n < (-tahun)) || (n > (9999 - tahun)))
        {
            cout << "=======================================================" << endl;
            cout << "Inputan Invalid, silahkan masukkan lagi" << endl;
            goto z;
        }

        cout << endl;

    if (n >= 0)
    {
        for (int i = 0; i <= n; i++)
        {
            
            if (tahun % 400 == 0 )
            {
                cout << tahun << " kabisat" << endl;

            } else if ((tahun % 400 != 0) && (tahun % 100 != 0) &&  (tahun % 4 == 0))
                {
                    cout << tahun << " kabisat" << endl;

                } else
                    {
                        cout << tahun << " bukan kabisat" << endl;
                    }

            tahun++;
        }
    } else if (n < 0)
        {
            for (int i = 0; i >= n; i--)
            {
            
            if (tahun % 400 == 0 )
            {
                cout << tahun << " kabisat" << endl;

            } else if ((tahun % 400 != 0) && (tahun % 100 != 0) &&  (tahun % 4 == 0))
                {
                    cout << tahun << " kabisat" << endl;

                } else
                    {
                        cout << tahun << " bukan kabisat" << endl;
                    }

            tahun--;
            }
        }

    cout << endl;
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