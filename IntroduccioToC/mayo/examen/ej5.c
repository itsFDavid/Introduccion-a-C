#include <stdio.h>
#include <time.h>

void calcularEdad(int anioNacimiento, int mesNacimiento, int diaNacimiento, int *edad_anios, int *edad_meses, int *edad_dias) {
    struct tm *tiempo;
    time_t tiempo_actual;
    int diferencia_anios, diferencia_meses, diferencia_dias;

    tiempo_actual = time(NULL);
    tiempo = localtime(&tiempo_actual);
    printf("Tiempo: %d\n", *tiempo);


    int anio_actual = tiempo->tm_year + 1900;
    int mes_actual = tiempo->tm_mon + 1;
    int dia_actual = tiempo->tm_mday;
    
    // Calcular la diferencia total en días
    int total_dias_nacimiento = anioNacimiento * 365 + (anioNacimiento / 4) + mesNacimiento * 30 + diaNacimiento;
    int total_dias_actual = anio_actual * 365 + (anio_actual / 4) + mes_actual * 30 + dia_actual;

    // Calcular la diferencia en años, meses y días
    diferencia_anios = (total_dias_actual - total_dias_nacimiento) / 365;
    diferencia_meses = ((total_dias_actual - total_dias_nacimiento) % 365) / 30;
    diferencia_dias = ((total_dias_actual - total_dias_nacimiento) % 365) % 30;

    *edad_anios = diferencia_anios;
    *edad_meses = diferencia_meses;
    *edad_dias = diferencia_dias;
    printf("Fecha de nacimiento: %d/%d/%d\n", diaNacimiento, mesNacimiento, anioNacimiento);
    printf("Fecha actual: %d/%d/%d\n", dia_actual, mes_actual, anio_actual);
}

int main() {
    time_t inicio, fin;
    inicio = clock();
    int anioNacimiento, mesNacimiento, diaNacimiento;
    int edad_anios, edad_meses, edad_dias;
    
    puts("Ingresa tu fecha de nacimiento");
    printf("Ingresa el año en que naciste: ");
    scanf("%d", &anioNacimiento);
    printf("Ingresa el mes en que naciste: ");
    scanf("%d", &mesNacimiento);
    printf("Ingresa el día en que naciste: ");
    scanf("%d", &diaNacimiento);

    calcularEdad(anioNacimiento, mesNacimiento, diaNacimiento, &edad_anios, &edad_meses, &edad_dias);

    printf("Has vivido %d años, %d meses, %d días\n", edad_anios, edad_meses, edad_dias);
    fin = clock();
    printf("Tiempo de ejecución: %f\n", (double)(fin - inicio) / CLOCKS_PER_SEC);
    return 0;
}
