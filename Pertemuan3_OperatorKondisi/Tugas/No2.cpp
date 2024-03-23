#include <iostream>
#include <iomanip> //untuk setprecision (angka di belakang koma)
using namespace std;

const float pajak = 0.95; //pajak=5% atau gaji bersih dikali 0.95

int main() {
    system("CLS");

    cout << "===============================" << endl;    
    cout << "          Program Gaji"          << endl;
    cout << "===============================" << endl;
    
    string nama;
    float gaji;
    int golongan, anak;
    int i;

    //nama
    cout << "Masukkan nama Anda : ";
    getline(cin,nama);

    //golongan
    cout << "Masukkan golongan (1,2,3) : ";
    cin >> golongan;

    switch (golongan)
    {
        case 1 :
            gaji = 5000000;
            break;
        case 2 :
            gaji = 3000000;
            break;
        case 3 :
            gaji = 2500000;
            break;    
        default :
            cout << "Error, inputan invalid";
            break;
    }

    //anak
    cout << "Masukkan jumlah anak : ";
    cin >> anak;
    
    switch (anak)
    {
        case 0 :
            gaji = gaji;
            break;
        case 1 :
            gaji += 500000;
            break;
        case 2 :
            gaji += 1000000;
            break;
        case 3 ... 11 :
            for (i=1; i<=anak; i++)
            {
                gaji += 750000;
            }
            break;
        default : 
            cout << "Error, inputan invalid";
            break;
    }

    //gaji bersih (-pajak)
    gaji = gaji * pajak;

    //mengatur angka di belakang koma
    cout << fixed;
    cout << setprecision(2);

    cout << "Gaji total : Rp. " << gaji;

    return 0;
}