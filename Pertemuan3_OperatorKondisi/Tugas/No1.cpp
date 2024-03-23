#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int bilangan;

    cout << "===============================" << endl;    
    cout << "Program Bilangan Genap / Ganjil" << endl;
    cout << "===============================" << endl;

    cout << "Masukkan sebuah bilangan bulat : ";
    cin >> bilangan;

    if (bilangan % 2 == 0){
        cout << "Bilangan " << bilangan << " merupakan bilangan genap";
    } else {
        cout << "Bilangan " << bilangan << " merupakan bilangan ganjil";
    }
    
    return 0;
}