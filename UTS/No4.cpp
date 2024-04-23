#include <iostream>
using namespace std;

int main()
{
    int tinggi;

        system("cls");

    cout << "Masukkan nilai tinggi : ";
    cin >> tinggi;

    int n=1;
    
    for (int i = tinggi; i > 0; i--)
    {
        if ( n >= tinggi/2)
        {
            for (int j = i/2; j > 0; j--)
            {
                cout << " ";
            }
            cout << endl;

            for (int k = 1; k < i/2; k++)
            {
                cout << "* ";
            }
        }

        if ( n < tinggi/2)
        {
            for ( int l = 1; l < i/2; i++)
            {
                cout << " ";
            }

            for ( int m = i/2; m > 0; m--)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    
    return 0;
}