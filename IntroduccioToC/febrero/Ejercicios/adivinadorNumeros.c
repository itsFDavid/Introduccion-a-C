#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroAleatorio, intento, intentosRestantes = 5;
    srand(time(0));

    numeroAleatorio = rand() % 100 + 1;

    printf("Bienvenido al juego de adivinanzas.\n");
    printf("He seleccionado un número entre 1 y 100. Adivina cuál es.\n");

    while (intentosRestantes > 0) {
        printf("Intento #%d: ", 6 - intentosRestantes);
        scanf("%d", &intento);

        if (intento == numeroAleatorio) {
            printf("¡Felicidades! Has adivinado el número.\n");
            break;
        } else if (intento < numeroAleatorio) {
            printf("El número es mayor.\n");
        } else {
            printf("El número es menor.\n");
        }

        intentosRestantes--;

        if (intentosRestantes > 0) {
            printf("Te quedan %d intentos.\n", intentosRestantes);
        } else {
            printf("Lo siento, has agotado todos tus intentos. El número era %d.\n", numeroAleatorio);
        }
    }

    return 0;
}
