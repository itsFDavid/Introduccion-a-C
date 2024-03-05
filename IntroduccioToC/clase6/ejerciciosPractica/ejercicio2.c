#include <stdio.h>
void limpiar_terminal() {
    printf("\033[2J"); 
    printf("\033[H");
}
int factorial(int numero){
    if(numero <= 1){ return 1;}
    else{ return numero*factorial(numero-1);}
}
int main(){
    int opcion, num1, num2;


    do{
        puts("Escoje la operacion a realizar\n");
        puts("[1] Suma");
        puts("[2] Resta");
        puts("[3] Multiplicacion");
        puts("[4] Division");
        puts("[5] Factorial");
        puts("Ingresa opcion: ");
        scanf("%d", &opcion);
        limpiar_terminal();
        printf("Tu opcion fue: [%d]\n", opcion);
        switch (opcion){
            case 1:
                puts("Ingresa numero a sumar: ");
                scanf("%d", &num1);
                puts("Ingresa otro numero: ");
                scanf("%d", &num2);
                printf("El resultado de sumar %d + %d: %d\n", num1, num2, (num1+num2));
                break;
            case 2:
                puts("Ingresa numero a restar: ");
                scanf("%d", &num1);
                puts("Ingresa otro numero: ");
                scanf("%d", &num2);
                printf("El resultado de restar %d - %d: %d\n", num1, num2, (num1-num2));
                break;
            case 3:
                puts("Ingresa numero a multiplicar: ");
                scanf("%d", &num1);
                puts("Ingresa otro numero: ");
                scanf("%d", &num2);
                printf("El resultado de multiplicar %d * %d: %d\n", num1, num2, (num1*num2));
                break;
            case 4:
                puts("Ingresa numero a dividir: ");
                scanf("%d", &num1);
                puts("Ingresa otro numero: ");
                scanf("%d", &num2);
                printf("El resultado de dividir %d / %d: %d\n", num1, num2, (num1/num2));
                break;
            case 5:
                puts("Ingresa numero a obtener el factorial: ");
                scanf("%d", &num1);
                printf("El resultado de el factorial de %d: %d\n", num1, factorial(num1));
                break;

        
        default:
            puts("Opcion invalida, por favor ingrese una opcion dentro del rango");
            break;
        
        }
    }while(opcion==0);
        puts("Fin de programa");
    
    


    return 0;
}