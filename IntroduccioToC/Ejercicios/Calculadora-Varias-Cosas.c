#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float metrosToPies(float metros) {
    return metros * 3.281;
}

float piesToMetros(float pies) {
    return pies / 3.281;
}

float kilogramosToLibras(float kilogramos) {
    return kilogramos * 2.205;
}

float librasToKilogramos(float libras) {
    return libras / 2.205;
}

int main() {
    int opcion;
    float valor;

    printf("Seleccione una opcion:\n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    printf("3. Metros a Pies\n");
    printf("4. Pies a Metros\n");
    printf("5. Kilogramos a Libras\n");
    printf("6. Libras a Kilogramos\n");
    scanf("%d", &opcion);

    printf("Ingrese el valor a convertir: ");
    scanf("%f", &valor);

    switch (opcion) {
        case 1:
            printf("%.2f Celsius equivale a %.2f Fahrenheit.\n", valor, celsiusToFahrenheit(valor));
            break;
        case 2:
            printf("%.2f Fahrenheit equivale a %.2f Celsius.\n", valor, fahrenheitToCelsius(valor));
            break;
        case 3:
            printf("%.2f Metros equivale a %.2f Pies.\n", valor, metrosToPies(valor));
            break;
        case 4:
            printf("%.2f Pies equivale a %.2f Metros.\n", valor, piesToMetros(valor));
            break;
        case 5:
            printf("%.2f Kilogramos equivale a %.2f Libras.\n", valor, kilogramosToLibras(valor));
            break;
        case 6:
            printf("%.2f Libras equivale a %.2f Kilogramos.\n", valor, librasToKilogramos(valor));
            break;
        default:
            printf("Opcion invalida.\n");
    }

    return 0;
}
