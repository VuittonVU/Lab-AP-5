#include <iostream>
using namespace std;

void pertambahan(float *ptrbil1, float *ptrbil2)
{
    cout << "Hasil: " << *ptrbil1 + *ptrbil2 << endl;
}

void pengurangan(float *ptrbil1, float *ptrbil2)
{
    cout << "Hasil: " << *ptrbil1 - *ptrbil2 << endl;
}

void perkalian(float *ptrbil1, float *ptrbil2)
{
    cout << "Hasil: " << *ptrbil1 * *ptrbil2 << endl;
}

void pembagian(float *ptrbil1, float *ptrbil2)
{
    cout << "Hasil: " << *ptrbil1 / *ptrbil2 << endl;
}


int main() 
{
    char operasi;
    float bil1, bil2;

    char ulang;

    //label perulangan program
    Ulang_Program:

        system("CLS");
    
    cout << "Masukkan operasi yang ingin dilakukan (+,-,*,/): ";
    cin >> operasi;

    cout << "Masukkan angka pertama : ";
    cin >> bil1;

    cout << "Masukkan angka kedua   : ";
    cin >> bil2;

    switch (operasi)
    {
        case '+'    : pertambahan(&bil1, &bil2);
                        break;

        case '-'    : pengurangan(&bil1, &bil2);
                        break;

        case '*'    : perkalian(&bil1, &bil2);
                        break;

        case '/'    : pembagian(&bil1, &bil2);
                        break;

        default     : break;
    }

        cout << endl;
    cout << "Apakah Anda ingin mengulang program (Y/T) ? ";
    cin >> ulang;
    ulang = toupper(ulang);
    
    if (ulang == 'Y')
    {
        goto Ulang_Program;
    }
    
    cout << "Terima kasih telah memakai program ini " << endl;
    cout << "=======================================================" << endl;
    
    return 0;
}