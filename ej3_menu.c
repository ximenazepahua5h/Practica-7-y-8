#include <stdio.h>
#define PI 3.14159  // Definimos PI porque la usaremos despues 

int main() {
    enum Opciones {CIRCULO = 1, TRIANGULO, RECTANGULO, SALIR}; // Enum de opciones
    int opcion;
    float base, altura, radio, area; // para abarcar datos mas exactos

    do {
        // Menú
        printf("\n--- Calculadora de Areas ---\n");
        printf("1. Circulo\n");
        printf("2. Triangulo\n");
        printf("3. Rectangulo\n");
        printf("4. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) { //desplegamos el menu y dentro de cada caso sus operacione s
            case CIRCULO:
                printf("Ingresa el radio del circulo: ");
                scanf("%f", &radio);
                area = PI * radio * radio;
                printf("Area del circulo: %.2f\n", area);
                break;

            case TRIANGULO:
                printf("Ingresa la base del triangulo: ");
                scanf("%f", &base);
                printf("Ingresa la altura del triangulo: ");
                scanf("%f", &altura);
                area = (base * altura) / 2;
                printf("Area del triangulo: %.2f\n", area);
                break;

            case RECTANGULO:
                printf("Ingresa la base del rectangulo: ");
                scanf("%f", &base);
                printf("Ingresa la altura del rectangulo: ");
                scanf("%f", &altura);
                area = base * altura;
                printf("Area del rectangulo: %.2f\n", area);
                break;

            case SALIR:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion invalida. Intenta de nuevo.\n");
        }

    } while(opcion != SALIR);

    return 0;
}