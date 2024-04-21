#include <iostream>
using namespace std;

int main()
{
    system("cls");

    string nama;

    cout << "Masukkan nama Anda: ";
    getline(cin, nama);

    for (char c : nama)
    {
        if (c == 'a'){
            c = 'o';
        }
        if (c == 'i'){
            c = 'o';
        }
        if (c == 'u'){
            c = 'o';
        }
        if (c == 'e'){
            c = 'o';
        }
        cout << c;

    }

    
}