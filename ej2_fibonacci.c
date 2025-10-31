#include <stdio.h> //libreriaaa

int main() {
    int limite, a = 0, b = 1, siguiente; //variables limite= hasta que numero, a=0 b=1 primeros num de la serie

    printf("Ingresa el límite de la serie Fibonacci: ");
    scanf("%d", &limite); //se guarda en limite el num que ingresa el usuario

    printf("Serie de Fibonacci hasta %d:\n", limite); //imprimer el limite 

    do {
        printf("%d ", a); //imprimer el valor inicial de a=0
        siguiente = a + b; // 0+1 =1 
        a = b; //b le pasa el valor a a
        b = siguiente; //b toma el valor de la suma 
    } while (a <= limite); // todo se ejecuta mientras a sea menor o igual que el limite 

    printf("\n");
    return 0;
}