#include <stdio.h>
#include <string.h>
float maximo(float n1, float n2);
void inverso();

int main(){
    float n1, n2;
    printf("Ingrese dos numeros: ");
    scanf("%f %f", &n1, &n2);
    printf("El maximo es: %.2f\n", maximo(n1, n2));
    inverso();
    return 0;
}

float maximo(float n1, float n2){
    if(n1>n2){
        return n1;
    }else{
        return n2;
    }
}

void inverso(){
    char palabra[50];
    int len=0;
    puts("Ingrese una palabra: ");
    scanf("%s", palabra);
    len= strlen(palabra);
    for(int i=len-1; i>=0; i--){
        printf("%c", palabra[i]);
    }
    printf("\n");
}