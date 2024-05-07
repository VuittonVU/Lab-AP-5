#include <iostream>
#include <array>
using namespace std;

//Fungsi pengulangan space sebelum deret angka
int Fungsi_Spasi(int baris, int tinggi)
{
    for(int k = baris; k < tinggi; k++)
        {
            cout << " ";
        }

    return 0;
}


int main() 
{
    int tinggi;
    array <array <int, 30>, 30> nilai;
    char ulang;

    //label perulangan program
    Ulang_Program:

        system("CLS");

    //label perulangan inputan invalid
    Ulang:

    cout << "Masukkan nilai tinggi dari segitiga pascal: ";
    cin >> tinggi;

        //pengecekan validitas panjang interval
        while( (tinggi < 1) || (tinggi > 30) )
        {
            cout << "Inputan invalid, berikan nilai dari rentang 1--30" << endl;
            goto Ulang;
        }

    //perulangan memberi nilai pada segitiga pascal
    for (int baris = 1; baris <= tinggi; baris++)
    {
        //Fungsi pengulangan space sebelum deret angka
        Fungsi_Spasi(baris, tinggi);

        for (int kolom = 1; kolom <= baris; kolom++)
        {
            //pemberian nilai 1 ke array indeks pertama dan indeks terakhir
            if ( ( nilai[baris][kolom] == nilai[baris][1]) || (nilai[baris][kolom] == nilai[kolom][kolom]) )
            {
                nilai[baris][kolom] = 1;

            }else
                {
                    nilai[baris][kolom] = nilai[baris-1][kolom-1] + nilai[baris-1][kolom];
                }
            
            cout << nilai[baris][kolom];
            cout << " ";
        }      

        cout << endl;
    }

        cout << endl;

    int index1;
    int index2;

    //perulangan label untuk inputan invalid manakala index2 lebih besar dari index1
    Ulang2:

    cout << "Masukkan dua buah bilangan index(1--30; y<=x): ";
    cin >> index1;
    cin >> index2;

        while(index2 > index1)
        {
            cout << "Inputan invalid" << endl;
            goto Ulang2;
        }

    cout << nilai[index1][index2];


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