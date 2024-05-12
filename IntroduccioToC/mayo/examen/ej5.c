#include <stdio.h>
#include <time.h>

void calcularEdad(int anioNacimiento, int anioActual, int *edad_anios, int *edad_meses, int *edad_dias) {
    struct tm *tiempo;
    time_t tiempo_actual;
    int diferencia_anios, diferencia_meses, diferencia_dias;

    tiempo_actual = time(NULL);
    tiempo = localtime(&tiempo_actual);

    int anio_actual = tiempo->tm_year + 1900;
    int mes_actual = tiempo->tm_mon + 1;
    int dia_actual = tiempo->tm_mday;

    // Calcular la diferencia total en días
    int total_dias_nacimiento = anioNacimiento * 365 + (anioNacimiento / 4);
    int total_dias_actual = anio_actual * 365 + (anio_actual / 4) + (mes_actual * 30) + dia_actual;

    // Calcular la diferencia en años, meses y días
    diferencia_anios = (total_dias_actual - total_dias_nacimiento) / 365;
    diferencia_meses = ((total_dias_actual - total_dias_nacimiento) % 365) / 30;
    diferencia_dias = ((total_dias_actual - total_dias_nacimiento) % 365) % 30;

    *edad_anios = diferencia_anios;
    *edad_meses = diferencia_meses;
    *edad_dias = diferencia_dias;
}

int main() {
    int anioNacimiento, edad_anios, edad_meses, edad_dias;
    int anioActual;
    
    puts("Ingresa tu fecha de nacimiento");
    printf("Ingresa el año en que naciste: ");
    scanf("%d", &anioNacimiento);

    puts("Ingresa tu fecha actual");
    printf("Ingresa el año: ");
    scanf("%d", &anioActual);

    calcularEdad(anioNacimiento, anioActual, &edad_anios, &edad_meses, &edad_dias);

    printf("Has vivido %d años, %d meses, %d días\n", edad_anios, edad_meses, edad_dias);

    return 0;
}
