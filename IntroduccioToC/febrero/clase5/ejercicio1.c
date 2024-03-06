#include <stdio.h>

int main(){

    int años;
    float sueldo;
    float sueldoPorciento;
    printf("Ingresa tus años de antiguedad en el trabajo\n");
    scanf("%d", &años);

    printf("Ingresa tu sueldo\n");
    scanf("%f", &sueldo);

    sueldoPorciento= (sueldo * 100)/10;

    if(años >= 5){
        if (sueldoPorciento > 1000){
            printf("Estas sujeto a un credito hipotecario ¡Felicidades!\n");
        }else{
            printf("No estas sujeto a un credito hipotecario\n");
        }
        
    }else{
        printf("No estas sujeto a un credito hipotecario\n");
    }
    

    return 0;
}