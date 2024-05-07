#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector <int> vektor;
    int bilangan;

        system("CLS");
    
    cout << "Masukkan sebuah deretan angka: ";
    
    while (true)
    {
        cin >> bilangan;
        if(bilangan != -1)
        {   
            //push_back untuk memasukan angka ke dalam vektor berdasarkan urutan terakhir/ elemen terakhir
            vektor.push_back(bilangan);
        } else 
            {
                break;
            }
    }

    for (int i = 0; i < vektor.size(); i++)
    {
        cout << vektor[i] << " ";
    }
    
        cout << endl;

    cout << "Panjang Vektor: " << vektor.size();

        cout << endl;

    for (int i = 0; i < vektor.size(); i++)
    {
        cout << vektor[i] << " ";
            cout << endl;
    }

    //menghapus semua element di dalam vector
    vektor.clear();

     cout << "Panjang Vektor: " << vektor.size();

    return 0;
}