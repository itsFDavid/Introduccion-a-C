#include <stdio.h>
#include <stdlib.h>

/*
Calcula la cantidad de segundos que has vivido

1 Minuto = 60 Segundos
1 hora = 60 Minutos
1 Dia = 24 Horas
1 Año = 365 Dias

Declara 3 variables de tipo enteras y asignales valores
Mostrar el resultado de las 3 Multiplicaciones

*/

int main(){
    int año= 365;
    int dias= 24;
    int horas= 60;
    int segs= 60;
    int segVividos= 19 *año*dias*horas*segs;
    printf("LLevas %d segundos vividos hasta ahora\n", segVividos);
    return 0;
}