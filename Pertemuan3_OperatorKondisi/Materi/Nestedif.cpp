#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int umur;

    cout << "Berapa umur kamu : ";
    cin >> umur;

    // if (umur < 0){
    //     cout << "Kamu bukan manusia";
    // }   else {
    //     if ( umur >= 0 && umur <=5) {
    //         cout << "Kamu masih balita";
    //     }else if (umur >= 6 && umur <=18){
    //         cout << "Kamu adalah remaja";
    //     } else if (umur >= 19 && umur <=44){
    //         cout << "Kamu adalah dewasa";
    //     } else if (umur >= 45 && umur <=70){
    //         cout << "Kamu adalah lansia";
    //     } else {
    //         cout << "Kamu sudah meninggal";
    //     }
    // }
    
        if (umur < 0){
        cout << "Kamu bukan manusia";
    }   else {
        switch (umur){
            case 0 ... 5:
                cout << "Balita";
                break;
            case 6 ... 18:
                cout << "Remaja";
                break;
            
            case 19 ... 44:
                cout << "Dewasa";
                break;

            case 45 ... 70:
                cout << "Lansia";
                break;
            
            default: 
                cout << "Invalid";
                break;
        }
    }
    
    return 0;
}