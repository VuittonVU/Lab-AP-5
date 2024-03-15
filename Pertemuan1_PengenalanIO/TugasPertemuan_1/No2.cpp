#include <iostream>
using namespace std;

int main()
{
        system("cls");

    cout <<"=================================" << endl;
    cout <<" Perbedaan dari cin dan getline" << endl;
    cout <<"=================================" << endl;

    cout <<"Cin berfungsi untuk inputan semua tipe data dasar namun hanya satu katu atau satu nilai saja hingga karakter spasi." << endl;
    cout <<"Contoh : " << endl;
        string nama2;
    cout <<"Nama : "; cin >> nama2;
    cout <<"Nama anda adalah : " << nama2 << endl;
    cout <<"Getline berfungsi untuk inputan string saja namun dapat membaca semua baris teks termasuk dengan karakter spasi." << endl;
    cout <<"Contoh : " << endl;
        string nama;
    cout <<"Nama : "; 
    getline(cin, nama);
    cout <<"Nama anda adalah : " << nama << endl;

        cout << endl;
}
