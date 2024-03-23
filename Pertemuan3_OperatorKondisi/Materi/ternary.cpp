#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int tinggi;
    string hasil;

    cout << "Tinggi badan kamu berapa : ";
    cin >> tinggi;

    hasil =  (tinggi > 200) ? "Kamu berbakat menjadi pemain basket" : "kamu mungkin berbakat menjadi pemain basket di kehidupan selanjutnya";

    cout << hasil << endl;
    
    return 0;
}