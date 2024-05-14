#include <iostream>
using namespace std;

int main() 
{
    char *ptrkalimat = "K O M P U T E R";

        system("CLS");
    
    for (int i = 0; i < 15; i++)
    {
        cout << ptrkalimat[i];
    }

    cout << " : ";
    cout << ptrkalimat[8] << endl;
    
    return 0;
}