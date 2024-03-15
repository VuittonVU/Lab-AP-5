#include<iostream>
using namespace std;

int main()
{
    system("CLS");

    bool kondisi1 = true;
    bool kondisi2 = false;

    bool hasil = kondisi1 and kondisi2;
    bool hasil1 = kondisi1 && kondisi2;

    cout << hasil;
    cout << hasil1;

    return 0;
}