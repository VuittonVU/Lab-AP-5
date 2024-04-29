#include <iostream>
#include <cmath>
using namespace std;


int pangkat(int num, int pangkat)
{
    int hasil = pow(num, pangkat);

    return hasil;
}

int main() {
    system("CLS");

    int n;
    int angka;

    cin >> angka;
    cin >> n;
    
    cout << "Hasil adalah: " << pangkat(angka,n);

    return 0;
}