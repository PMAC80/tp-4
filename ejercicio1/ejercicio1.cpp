#include <iostream>
using namespace std;

void clearConsole();


int main()
{
    clearConsole();

    const int max = 100;
    typedef int tnumeros[max];

    tnumeros numeros;
    for ( int i = 0; i < max ; i++ )
    {
    numeros [i]= i+1; 
    }
    for ( int i = 0; i < max ; i++ )
    {
    cout << " Al numero : " << numeros[i] << "( le correponde su indice :)  " << i << endl;
    }
    return 0;
}

 void clearConsole() {
    #ifdef __unix__
        system("clear");
    #elif __APPLE__
        system("clear");
    #elif defined(_WIN32) || defined(WIN64)
        system("cls");
    #endif
}
