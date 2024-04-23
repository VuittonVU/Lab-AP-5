#include <iostream>
using namespace std;

int main()
{
    int bil;

        system("cls");

    cout << "Masukkan suatu bilangan bulat: ";
    cin >> bil;

    //ganjil/genap
    if (bil % 2 == 0)
    {
        cout << "Angka " << bil << " adalah bilangan genap" << endl;

    }   else 
        {
            cout << "Angka " << bil << " adalah bilangan ganjil" << endl;
        }

    //habis dibagi 3
    if (bil % 3 == 0)
    {
        cout << "Angka " << bil << " habis dibagi 3" << endl;

    }   else
        {
            cout << "Angka " << bil << " tidak habis dibagi 3" << endl;
        }

    //habis dibagi 5
    if (bil % 5 == 0)
    {
        cout << "Angka " << bil << " habis dibagi 5" << endl;

    }   else 
        {
            cout << "Angka " << bil << " tidak habis dibagi 5" << endl;
        }

    if (bil % 7 == 0)
    {
        cout << "Angka " << bil << " habis dibagi 7" << endl;

    }   else
        {
            cout << "Angka " << bil << " tidak habis dibagi 7" << endl;
        }

    return 0;
}