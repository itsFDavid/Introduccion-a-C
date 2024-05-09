#include <stdio.h>
#include <time.h>


int calcularEdad(int anio, int anioActual){
    return anioActual-anio;
}
void edadApun(){
    time_t inicio, fin;
    inicio= clock();
    int anio, dia, mes;
    puts("Ingresa tu fecha de nacimineto");
    printf("Ingresa el año en que naciste: ");
    scanf("%d", &anio);
    puts("");
    printf("Ingresa el mes en que naciste: ");
    scanf("%d", &mes);
    puts("");
    printf("Ingresa el dia en que naciste: ");
    scanf("%d", &dia);

    printf("Tu fecha de nacimiento es: \n\t %d/%d/%d\n", anio, mes, dia);

    int anioActual, mesActual, diaActual;
    puts("Ingresa tu fecha de actual");
    printf("Ingresa el año: ");
    scanf("%d", &anioActual);

    calcularEdad(anio, anioActual);
    fin= clock();
    printf("Tu edad es: %d\n", calcularEdad(anio, anioActual));
    printf("El tiempo de ejecucion es: %f\n", (float)(fin-inicio)/CLOCKS_PER_SEC);
}
void edadSinP(){
    time_t inicio, fin;
    inicio= clock();
    int anio, dia, mes;
    puts("Ingresa tu fecha de nacimineto");
    printf("Ingresa el año en que naciste: ");
    scanf("%d", &anio);
    puts("");
    printf("Ingresa el mes en que naciste: ");
    scanf("%d", &mes);
    puts("");
    printf("Ingresa el dia en que naciste: ");
    scanf("%d", &dia);

    printf("Tu fecha de nacimiento es: \n\t %d/%d/%d\n", anio, mes, dia);

    int anioActual, mesActual, diaActual;
    puts("Ingresa tu fecha de actual");
    printf("Ingresa el año: ");
    scanf("%d", &anioActual);

    calcularEdad(anio, anioActual);
    fin= clock();
    printf("Tu edad es: %d\n", calcularEdad(anio, anioActual));
    printf("El tiempo de ejecucion es: %f\n", (float)(fin-inicio)/CLOCKS_PER_SEC);
}

int main(){
    edadApun();
    edadSinP();
    return 0;
}

