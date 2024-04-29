#include <iostream>
using namespace std;

int main()
{
    string kalimat;

        system("cls");

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    for (int i = kalimat.length()-1; i < kalimat.length(); i--)
    {
        cout << kalimat[i];
        cout << endl;
    }
    

    return 0;
}