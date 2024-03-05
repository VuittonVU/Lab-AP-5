#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string nama, nim;
    char kom;
    float ipk;

    cout <<"===============================" << endl;
    cout <<" Form Pengisian Data Mahasiswa" << endl;
    cout <<"===============================" << endl;
    cout <<"Nama : "; getline(cin, nama);
    cout <<"NIM  : "; cin >> nim;
    cout <<"Kom  : "; cin >> kom;
    cout <<"IPK  : "; cin >> ipk;

    system("cls");

    cout <<"Nama : " << nama << endl;
    cout <<"NIM : " << nim << endl;
    cout <<"Kom : " << kom << endl;
        cout<<fixed;
        cout<<setprecision(2);
    cout <<"IPK : " << ipk << endl;
}