#include <stdio.h>  // Biblioteca 

int main() {
    int num, i = 1, suma = 0;  // Declaramos las variables:
                               // num = el número ingresado por el usuario
                               // i = contador que recorrerá los posibles divisores
                               // suma = acumula la suma de los divisores

    printf("Ingresa un número entero positivo: ");  // Pedimos un núm al usuario
    scanf("%d", &num);  // Leemos el número y lo guardamos en 'num'

    // Mientras 'i' sea menor que el número, verificamos si 'i' es divisor
    while (i < num) {
        // Si 'num' es divisible entre 'i' (num % i == 0), se suma 'i' a 'suma'
        // De lo contrario, se suma 0 Comprueba si el residuo de dividir num entre i es igual a 0.
        suma += (num % i == 0) ? i : 0;
        i++;  // Aumentamos 'i' en 1 para probar el siguiente posible divisor
    }

    // Después del ciclo, comparamos si la suma de los divisores es igual al número
    // Si lo es, el número es perfecto. si no no lo es.
    (suma == num) ? printf("%d es un número perfecto.\n", num)
                  : printf("%d no es un número perfecto.\n", num);

    return 0; 
}