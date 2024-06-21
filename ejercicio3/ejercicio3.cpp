#include <iostream> // Incluye la librería iostream para la entrada y salida de datos

// Función que determina si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false; // Los números menores o iguales a 1 no son primos
    for (int i = 2; i * i <= num; ++i) { // Bucle que comprueba los posibles divisores del número
        if (num % i == 0) return false; // Si encuentra un divisor, no es primo
    }
    return true; // Si no encuentra divisores, es primo
}

int main() { // Función principal donde comienza la ejecución del programa
    const int SIZE = 100; // Define una constante llamada SIZE con valor 100
    int primos[SIZE]; // Declara un array de enteros llamado 'primos' con tamaño 'SIZE'
    int index = 0; // Índice para mantener la posición actual en el array 'primos'

    // Bucle para encontrar los números primos entre 1 y 100
    for (int i = 1; i <= 100; ++i) {
        if (esPrimo(i)) { // Comprueba si el número es primo
            primos[index++] = i; // Si es primo, lo añade al array 'primos' y aumenta el índice
        }
    }

    // Bucle para mostrar los números primos en pantalla
    for (int i = 0; i < index; ++i) {
        std::cout << primos[i] << " "; // Imprime cada número primo seguido de un espacio
    }

    std::cout << std::endl; // Imprime una nueva línea al final para mejorar el formato de salida

    return 0; // Termina la función main y devuelve 0, indicando que el programa finalizó correctamente
}
