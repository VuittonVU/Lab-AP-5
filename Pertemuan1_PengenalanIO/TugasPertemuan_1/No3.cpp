#include <iostream>
#include <iomanip>
using namespace std;

 int main()
 {
    float meter, kilometer;

        system("cls");

    cout <<"==============================================" << endl;
    cout <<" Pengubah Jarak dari meter menjadi kilometer"   << endl;
    cout <<"==============================================" << endl;
    cout <<"Masukkan nilai satuan jarak meter(m) : "; cin >> meter;
      
    kilometer = meter/1000;

    cout << fixed;
    cout << setprecision(2);

    cout <<"Hasil dalam kilometer(km): " << kilometer << endl;

 }