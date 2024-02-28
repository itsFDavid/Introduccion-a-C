#include <stdio.h>

int main(){
    int hst;
    float ph;

    printf("Ingresa horas semanales trabajadas\n");
    scanf("%d", &hst);
    printf("Ingresa precio por horas\n");
    scanf("%f", &ph);
    float salario;
    if(hst <= 40){
        salario= (hst * 40);
    }else{
        salario= (40 * ph +(ph *1.5 *(hst - 40)));
    }
    printf("Tu sueldo neto es de : %f\n", salario);


    return 0;
}