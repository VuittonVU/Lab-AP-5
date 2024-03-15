#include<iostream>
using namespace std;

int main()
{
    int I=2, K=7, L=1, C=9, U=5, S=6;
    int hasil_1a, hasil_2a, hasil_3a, hasil_4a;

        system("CLS");

    cout << "==============================================" << endl;    
    cout << "Program Perhitungan Ekspresi Relasi dan Logika" << endl;
    cout << "==============================================" << endl;

    cout << "a. 3-1 < I or K-5 < 8+2 AND L+7 >= 9+3" << endl;
    hasil_1a = (3-1)<I || (K-5)<(8+2) && (L+7)>=(9+3);
    cout << "Jawaban : "<< hasil_1a << endl;
        cout << endl;

    cout << "b. L%3 > U AND (C/U < S OR 3*I-K > 0)" << endl;
    hasil_2a = (L+3)>U && ((C/U)<S || (3*1-K)>0);
    cout << "Jawaban : "<< hasil_2a << endl;
        cout << endl;

    cout << "c. I-9 > K OR L+3 < 4*C" << endl;
    hasil_3a = (I-9)>K || (L+3)<(4*C);
    cout << "Jawaban : "<< hasil_3a << endl;
        cout << endl;

    cout << "I OR K AND L XOR 3 SHL 2" << endl;
    hasil_4a = I | K & L ^ 3 << 2;
    cout << "Jawaban : "<< hasil_4a << endl;
        cout << endl;
}