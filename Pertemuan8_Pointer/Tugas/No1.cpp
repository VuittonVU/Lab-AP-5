#include <iostream>
using namespace std;

int main() 
{
    int bil[20];
    int *ptrbil;

        system("CLS");

    for (int i = 1; i <= 20; i++)
    {
        bil[i] = i;
    }

    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 1)
        {
            cout << bil[i] << endl;
            ptrbil = &bil[i];
            cout << "Alamat memori: "<< ptrbil << endl;
                //jika tidak mau menggunakan pointer:
                //cout << "Alamat memori: "<< &bil[i] << endl;
                    cout << endl;
        }
    }

    return 0;
}