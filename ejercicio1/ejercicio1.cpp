#include <iostream> // Incluye la librería iostream para la entrada y salida de datos

int main() { // Función principal donde comienza la ejecución del programa
    const int SIZE = 100; // Define una constante llamada SIZE con valor 100
    int numbers[SIZE]; // Declara un array de enteros llamado 'numbers' con tamaño 'SIZE'

    // Bucle for para llenar el array con los primeros 100 números enteros
    for (int i = 0; i < SIZE; ++i) {
        numbers[i] = i + 1; // Asigna a cada elemento del array el valor de 'i + 1'
    }

    // Bucle for para mostrar los números en pantalla
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << " "; // Imprime cada número seguido de un espacio
    }

    std::cout << std::endl; // Imprime una nueva línea al final para mejorar el formato de salida

    return 0; // Termina la función main y devuelve 0, indicando que el programa finalizó correctamente
}
