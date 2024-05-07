#include <iostream>
#include <array>
#include <cmath>// untuk penggunaan power(perpangkatan)
#include <iomanip> //untuk penggunaan fungsi setprecision(mengatur berapa angka di belakang koma)
using namespace std;

int main() 
{
    array <array <int,3>, 3> arr; //array utk menampung data table
    array <int,3> temp; //array untuk menampung data terbesar
    array <int,3> k;
    char ulang;

    //label perulangan program
    Ulang_Program:

        system("CLS");
    
    cout << "Masukkan 3 bilangan integer yang terdiri dari 3 baris sebagai representasi dari table 3x3 (spasi ikut): " << endl;

    //perulangan penginputan data table
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    //perulungan pengecekan data dengan nilai paling besar
     for (int i = 0; i < 3; i++)
    {
        if ( (arr[i][0] >= arr[i][1]) && (arr[i][0] >= arr[i][2]))
        {
            temp[i] = arr[i][0];

        } else if ((arr[i][1] >= arr[i][2]))
            {
                temp[i] = arr[i][1];

            } else
                {
                    temp[i] = arr[i][2];
                }
    }

        //untuk mengatur berapa angka di belakang koma
        cout << fixed;
        cout << setprecision(1); //satu angka di belakang koma

    float efisiensi =  sqrt( (pow(temp[0],2)) + (pow(temp[1],2)) + (pow(temp[2],2)) );
    cout << efisiensi;


        cout << endl << endl;
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