#include <iostream>
using namespace std;

int main() 
{
    string kalimat;

        system("CLS");
    
    //label perulangan inputan invalid
    Ulang:

    cout << "Masukkan string dengan maksimal 100 karakter('A'-'Z') dan spasi(' '): " << endl;
    getline(cin, kalimat);

        while(kalimat.length() > 100)
        {
            cout << "Inputan invalid, berikan kalimat dengan batas maksimal karakter 100" << endl;
            goto Ulang;
        }

    //penulisan substring kiri
    for(int i = (kalimat.length()/2)-1; i < kalimat.length()/2; i--)
    {
        cout << kalimat[i];
    }

    //penulisan substring kanan
    for(int i = kalimat.length(); i >= kalimat.length()/2; i--)
    {
        cout << kalimat[i];
    }


        cout << endl << endl;
    cout << "Terima kasih telah memakai program ini " << endl;
    cout << "=======================================================" << endl;
    return 0;
}