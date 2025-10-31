#include <stdio.h>

enum Tipo {PAR, IMPAR, PRIMO};

int main() {
    int num;
    int cuentaPar = 0, cuentaImpar = 0, cuentaPrimo = 0;
    int esPrimo;
    enum Tipo tipo;

    printf("Ingresa números (-999 para terminar):\n");

    while(1) { //pide numeros siempre hasta que ingresemos -999 solo en ese caso termina el mientras
        printf("Número: ");
        scanf("%d", &num);

        if(num == -999) break;

        // Verificar si es primo
        esPrimo = 1; // asumimos que es primo al iniciar hasta que se demuestre lo contrario
        if(num < 2) { // descarta 0 y al 1 pq un num primo es mayor o igual a dos 
            esPrimo = 0;
        } else {
            for(int i = 2; i < num; i++){  // Revisa todos los posibles divisores entre 2 y num-1; si encuentra alguno, no es primo
                if(num % i == 0) {
                    esPrimo = 0; //pasa a ser falso
                    break; 
                }
            }
        }
        // Clasificar usando enum
        if(num % 2 == 0) {
            tipo = PAR; // guardamos en la variable tipo que este num es par 
            cuentaPar++; // aumentamos contador 
        } else {
            tipo = IMPAR; //sino guardamos en tipo que el num es impar 
            cuentaImpar++; //aumentamos contador 
        }

        if(esPrimo) {
            tipo = PRIMO; // se guarda en en tipo el valor primo del enum
            cuentaPrimo++;//aumenta el contador 
        }
    }


    // Resultados
    printf("\nResultados finales:\n");
    printf("Números pares: %d\n", cuentaPar);
    printf("Números impares: %d\n", cuentaImpar);
    printf("Números primos: %d\n", cuentaPrimo);

    return 0;
}
