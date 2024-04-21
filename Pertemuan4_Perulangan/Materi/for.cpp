#include<iostream>
using namespace std;

int main()
{
    system("cls");

    for (int i = 0; i < 10; i++)
    {
        cout << "Hello World" << endl;
    }

    string nama = "noel";

    for (int i = 0; i < nama.length(); i++)
    {
        cout << nama[i] << endl;
    }

    for (char c : nama)
    {
        cout << c << endl;
    }

    return 0;
}