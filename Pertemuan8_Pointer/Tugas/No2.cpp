#include <iostream>
using namespace std;

int main() 
{
    int x;
    int *px;

        system("CLS");
    
    x = 25;

    //(1) px mengambil alamat memori dari x
    px = &x;
    cout << px;

        cout << endl;

    //(2) px mengambil nilai(value) dari x
    *px = x;
    cout << *px;
    
    return 0;
}