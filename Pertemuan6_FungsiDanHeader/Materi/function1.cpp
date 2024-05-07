#include <iostream>
using namespace std;

 //variabel global
int num3 = 10;

int sum(int num1, int num2 = 10)
{
    return num1 + num2;
}

int main() {
    system("cls");
    
    int hasil = sum(5);

    cout << hasil;
    
    return 0;
}
