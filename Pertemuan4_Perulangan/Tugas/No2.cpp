#include <iostream>
using namespace std;

int main() 
{
    string kalimat;
    char h;
    char ulang;

    //perulangan label
    x :

        system("CLS");
    
    cout << "=======================================================" << endl;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan sebuah huruf yang ingin dihilangkan: ";
    cin >> h;
    
    for (auto c : kalimat)
    {
        if (c == tolower(h) || c == toupper(h))
        {
            continue;
        }
        cout << c; 
    }

    cout << endl;
    cout << "Karakter terhapus = " << h;

    cout << endl << endl;
    cout << "Apakah Anda ingin mengulang program (Y/T) ? ";
    cin >> ulang;
    ulang = toupper(ulang);

        //agar inputan tidak berlanjut ke inputan selanjutnya
        getchar();

    if (ulang == 'Y')
    {
        goto x;
    }

    cout << "Terima kasih telah memakai program ini " << endl;
    cout << "=======================================================" << endl;

    return 0;
}
