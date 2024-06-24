/*Realizar un Programa que rellene un array con los números impares comprendidos entre 1 y
100 y los muestre en pantalla*/

#include <iostream>
using namespace std;

void clearConsole();
bool numeroImpar(int numero);

int main()
{
    clearConsole();
    int dim = 100;
    typedef int tnumerosImpares[dim];
    tnumerosImpares numimpar;

    for (int i = 1; i <= dim; i++)
    {
        if (numeroImpar(i))
            {
                numimpar[i] = i;
                cout << "es numeros impar : "<< endl;
                cout << numimpar[i] << endl;
            }
    }
    return 0;    
}

bool numeroImpar( int numero)
{
    for (int i = 0; i < dim; i++)
    {
        if (numero % 2 == 1) 
        {
           return true;
        }
        return false;
    }
}

 void clearConsole() 
{
    #ifdef __unix__
        system("clear");
    #elif __APPLE__
        system("clear");
    #elif defined(_WIN32) || defined(WIN64)
        system("cls");
    #endif
}

     
