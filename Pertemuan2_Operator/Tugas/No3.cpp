#include<iostream>
#include<cmath>
using namespace std;

const float phi = 3.14;

// sub program menampilkan tabel program
int Kode() 
{
    int pilihan;

    cout << "==============================================" << endl;
    cout << "      Program Menghitung Bangun Ruang" << endl;
    cout << "==============================================" << endl;
    cout << "|| 1. Kerucut                               ||" << endl;
    cout << "|| 2. Limas Segitiga                        ||" << endl;
    cout << "|| 3. Bola                                  ||" << endl;
    cout << "|| 4. Prisma                                ||" << endl;
    cout << "==============================================" << endl;
    cout << "Masukkan kode dari bangun ruang yang diinginkan : ";
    cin >> pilihan;
        cout << endl;

    return pilihan;
}

// sub program menghitung luas permukaan dan volume kerucut
float Kerucut()
{
    float r, tinggi, sisi;

    cout << "Masukkan nilai dari jari-jari kerucut : ";
    cin >> r;

    cout << "Masukkan nilai dari tinggi kerucut : ";
    cin >> tinggi;

    cout << "Masukkan nilai dari sisi kerucut : ";
    cin >> sisi;

    float luas_permukaan = phi * r * (r + sisi);
    float volume = phi * pow(r,2) * tinggi /3;

    cout << "Luas Permukaan : " << luas_permukaan << " cm^2" << endl;
    cout << "Volume : " << volume << " cm^3" << endl;
}

// sub program menghitung luas permukaan dan volume limas segitiga
float Limas_Segitiga() 
{
    float alas, tinggi_alas, tinggi_limas;

    cout << "Masukkan nilai dari alas : ";
    cin >> alas;

    cout << "Masukkan nilai dari tinggi alas : ";
    cin >> tinggi_alas;

    cout << "Masukkan nilai dari tinggi limas : ";
    cin >> tinggi_limas;

    float luas_permukaan = alas * tinggi_alas / 2;
    float volume = luas_permukaan * tinggi_limas / 3;

    cout << "Luas Permukaan : " << luas_permukaan << " cm^2" << endl;
    cout << "Volume : " << volume << " cm^3" << endl;
}

// sub program menghitung luas permukaan dan volume bola
float Bola()
{
    float r;

    cout << "Masukkan nilai dari jari-jari bola : ";
    cin >> r;

    float luas_permukaan = 4 * phi * pow(r,2);
    float volume = 4 * phi * pow(r,3) / 3;

    cout << "Luas Permukaan : " << luas_permukaan << " cm^2" << endl;
    cout << "Volume : " << volume << " cm^3" << endl;
}

// sub program menghitung luas permukaan dan volume prisma segitiga
float Prisma_Segitiga()
{
    float alas, tinggi_alas, miring, tinggi;

    cout << "Masukkan nilai dari panjang sisi alas pertama prisma segitiga (alas): ";
    cin >> alas;

    cout << "Masukkan nilai dari panjang sisi alas kedua prisma segitiga (tinggi): ";
    cin >> tinggi_alas;

    cout << "Masukkan nilai dari panjang sisi alas ketiga prisma segitiga (sisi miring): ";
    cin >> miring;

    cout << "Masukkan nilai dari tinggi prisma segitiga : ";
    cin >> tinggi;

    float keliling_alas = alas + tinggi_alas + miring;
    float luas_permukaan = (2 * alas * tinggi_alas /2) + (keliling_alas * tinggi);
    float volume = alas * tinggi_alas  * tinggi /2;

    cout << "Luas Permukaan : " << luas_permukaan << " cm^2" << endl;
    cout << "Volume : " << volume << " cm^3" << endl;   
}

// main program
int main()
{
        system("CLS");
    
    int pilihan = Kode();

    switch (pilihan)
    {
        case 1 : Kerucut(); break;
        case 2 : Limas_Segitiga(); break;
        case 3 : Bola(); break;
        case 4 : Prisma_Segitiga(); break;
        default : cout << "Error"; break;
    }
}