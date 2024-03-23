#include <stdio.h>

int main(){
    char num[20];
    printf("Ingresa un numero entero: \n");
    scanf("%s", num);

    char nums[10][4]; // Almacenará los dígitos de tres en tres
    int maximo = -1; // Variable para almacenar el máximo encontrado

    for(int i = 0; i < 20 - 2; i++) {
        // Copiamos los tres dígitos consecutivos en nums
        nums[i][0] = num[i];
        nums[i][1] = num[i+1];
        nums[i][2] = num[i+2];
        nums[i][3] = '\0'; // Agregamos el carácter nulo al final

        // Convertimos nums[i] a un entero para comparar con maximo
        int valor = 0;
        for (int j = 0; j < 3; j++) {
            valor = valor * 10 + (nums[i][j] - '0');
            printf("%d\n", valor);
        }

        // Verificamos si el valor es mayor que el máximo actual
        if (valor > maximo) {
            maximo = valor; // Actualizamos el máximo
        }
    }

    printf("Los valores almacenados en nums son: \n");
    for(int i = 0; i < 20 - 2; i++) {
        printf("%s\n", nums[i]);
    }

    printf("El número más grande es: %d\n", maximo);

    return 0;
}
