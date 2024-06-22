#include <iostream> 
using namespace std;

int main() 
{ 
    const int SIZE = 100;
    int numbers[SIZE];

    // Bucle for para llenar el array con los primeros 100 números enteros
    for (int i = 0; i < SIZE; ++i) 
    {
        numbers[i] = i + 1; // Asigna a cada elemento del array el valor de 'i + 1'
    }

    // Bucle for para mostrar los números en pantalla
    for (int i = 0; i < SIZE; ++i) 
    {
       cout << numbers[i] << " "; // Imprime cada número seguido de un espacio
    }

    cout << endl; // Imprime una nueva línea al final para mejorar el formato de salida

    return 0; 
}
