#include <stdio.h>
void limpiar_terminal() {
    printf("\033[2J"); 
    printf("\033[H");
}

int main(){
    int opcion, num1, num2;


    while (opcion==0){
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
                scanf("%d", num2);
                printf("El resultado de sumar %d + %d : %d\n", num1, num2, (num1+num2));
                break;
            case 2:
                puts("Ingresa numero a restar: ");
                scanf("%d", &num1);
                puts("Ingresa otro numero: ");
                scanf("%d", num2);
                printf("El resultado de restar %d + %d : %d\n", num1, num2, (num1-num2));
                break;
        
        default:
            break;
        }
    }
    


    return 0;
}