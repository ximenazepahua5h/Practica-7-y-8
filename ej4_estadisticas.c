#include <stdio.h>

int main() {
    int N, num;
    int positivos = 0, negativos = 0, pares = 0;

    printf("¿Cuántos números quieres ingresar? ");
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        printf("Ingresa el número %d: ", i + 1); //pide todos los num que haya querido ingresar 
        scanf("%d", &num);

        // Contar positivos o negativos
        (num > 0) ? positivos++ : (num < 0 ? negativos++ : 0); /* Se evalua el num y se agrega un "punto"
         dependiendo que en que concicion entre */

        // Contar pares
        (num % 2 == 0) ? pares++ : 0; // si es par se añade un "punto " a pares siempre y cuando el residuo sea 0 al dividir entre dos
    }

    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Pares: %d\n", pares);

    return 0;
}
