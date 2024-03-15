#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float A, B, C;
    float x1, x2, x3;
    int pangkat = 2;

        system("CLS");

    cout << "==============================================" << endl;
    cout << "Program Menghitung Akar-Akar Persamaan Kuadrat" << endl;
    cout << "==============================================" << endl;

    cout << "Bentuk Umum : Ax^2 + Bx + C = 0" << endl;
    cout << "Input nilai A : ";
    cin >> A;

    cout << "Input nilai B : ";
    cin >> B;

    cout << "Input nilai C : ";
    cin >> C;

    x1 = ( -B + sqrt( (pow(B,2)- 4*A*C) ) ) / (2*A);
    x2 = ( -B - sqrt( (pow(B,2)- 4*A*C) ) ) / (2*A);

    cout << "==============================================" << endl;
    cout << "Hasil Akar-Akar Persamaan " << A << "x^2 + " << B << "x + " << C << " = 0 :" << endl;
    cout << "x1 : " << x1 << endl;
    cout << "x2 : " << x2 << endl;

    // nan merupakan singkatan dari Not a Number dimana nan ditunjukkan sebagai hasil karena tidak dapat terdefinisi akibat dari faktor sbb:
    // 1. Pengakaran negatif
    // 2. Pembagian oleh nol
    // 3. Log berbasis negatif atau nol
}