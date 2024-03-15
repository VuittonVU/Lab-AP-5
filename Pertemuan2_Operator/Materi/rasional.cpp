#include<iostream>
using namespace std;

int main()
{
    system("CLS");

    int bilangan1 = 10;
    int bilangan2 = 20;

    // samadengan
    bool hasil1 = bilangan1 == bilangan2;
    cout << hasil1;

    // tidak samadengan
    bool hasil2 = bilangan1 != bilangan2;
    cout << hasil2;

    return 0;
}