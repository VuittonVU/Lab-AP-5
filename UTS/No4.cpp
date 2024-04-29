#include <iostream>
using namespace std;

int main()
{
    int tinggi;

        system("cls");

    cout << "Masukkan nilai tinggi : ";
    cin >> tinggi;

    for (int i = 0; i < tinggi; i++)
    {
        if ( i <= tinggi/2)
        {
            for (int j = i; j < tinggi/2; j++)
            {
                cout << " ";
            }

            for (int k = 0; k <= i; k++)
            {
                cout << "* ";
            }
        }

        if ( i > tinggi/2)
        {
            for (int j = 0; j < i - tinggi/2; j++)
            {
                cout << " ";
            }

            for (int k = 0; k < tinggi-i; k++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    
    return 0;
}