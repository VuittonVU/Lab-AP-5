#include <iostream>
using namespace std;

int main() {
    system("CLS");    
    
    char nilai;

    cout << "Berapa nilai kamu : ";
    cin >> nilai;
    nilai= toupper(nilai);

    if (nilai == 'A'){
        cout << "Bagus, Pertahankan";
    }   else if (nilai == 'B'){
        cout << "Bagus, Perkembangkan jadi A";
    }   else if (nilai == 'C'){
        cout << "Silahkan Belajar Lagi";
    }   else if (nilai == 'D'){
        cout << "Belajar Lebih Banyak";
    }   else if (nilai == 'E'){
        cout << "Silahkan Ngulang";
    }   else{
        cout << "Invalid, silahkan input dengan benar";
    }

    return 0;
}