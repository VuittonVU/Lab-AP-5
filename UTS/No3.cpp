#include <iostream>
using namespace std;

int function_prima(int bil)
{
    bool prima;

    if (bil == 2)
    {
        return prima = true;
    }

    for( int i = 2; i <= bil-1; i++)
    {
        if ( bil % i == 0)
        {
            return prima = false;

        } else 
            {
                return prima = true;
            }
    }

}


int main()
{
    int bil;
    bool prima;

        system("cls");

    ulang:

    cout << "Masukkan suatu bilangan bulat: ";
    cin >> bil;


        while (bil < 0)
        {
            cout << "Inputan Invalid, silahkan isi lagi" << endl;
            goto ulang;
        }

    prima = function_prima(bil);

    if (prima == true)
    {
        cout << bil << " adalah bilangan prima";

    } else if (prima == false)
        {
            cout << bil << " bukan bilangan prima";
        }

    return 0;
}