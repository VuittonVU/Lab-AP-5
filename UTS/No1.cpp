#include <iostream>
using namespace std;

int main()
{
    string kalimat;

        system("cls");

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    for (int i = kalimat.length(); i > kalimat.length() - 1; i--)
    {
        for(auto c : kalimat)
        {
                cout << c;
        }
        cout << endl;
    }
    

    return 0;
}