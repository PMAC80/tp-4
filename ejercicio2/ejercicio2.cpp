/*Realizar un Programa que rellene un array con los números primos comprendidos entre 1
y 100 y los muestre en pantalla*/

#include <iostream>
using namespace std;

void clearConsole();
bool numeroPrimo(int numero);

int main()
{
    clearConsole();

    int numeroMaximo = 100;
    typedef int tprimo[numeroMaximo];

    tprimo primo;

    for ( int i = 0 ; i <= numeroMaximo ; i++)
    {
        if (numeroPrimo(i))
        {
            primo [i] = i;
            cout << "Es numero primo : "<< primo[i] << endl;
        } 
    }
    return 0;
  
}

bool numeroPrimo(int numero) 
{
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; i++) 
    {
        if (numero % i == 0) return false;
    }
    return true;
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
