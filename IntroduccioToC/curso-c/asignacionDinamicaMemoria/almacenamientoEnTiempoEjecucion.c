#include <stdio.h>
#include <stdlib.h>





typedef struct Automovil{
    char Marca[30];
    char Modelo[30];
    char Color[30];
    char TipoDeAuto[30];
}Automovil;

void llenarDatosAutomvil(Automovil  *carroscreados, int cantidadAutos);
void imprimirDatosAutomvil(Automovil  *carroscreados, int cantidadAutos);



int main(){
    int cantidadAutos;
    printf("Cuantos autos quieres registrar\n");
    fflush(stdin);
    scanf("%d", &cantidadAutos);
    //reservar en memoria dinamica los datos que quiera infresar el usuario
    Automovil *carrosCreados= (Automovil *)calloc(cantidadAutos, sizeof(Automovil));
    llenarDatosAutomvil(carrosCreados, cantidadAutos);     
    imprimirDatosAutomvil(carrosCreados, cantidadAutos); 
    free(carrosCreados); 



    return 0; 
}

void llenarDatosAutomvil(Automovil *carroscreados, int cantidadAutos){
    printf("LLenado de datos: \n\n");
    for(int i=0; i<cantidadAutos; i++){
            fflush(stdin);
            printf("Escribe la marca del auto[%d]: \n", i+1);
            fflush(stdin);
            scanf("%s", carroscreados[i].Marca); 
            printf("Escribe el modelo del auto[%d]: \n", i+1);
            fflush(stdin);
            scanf("%s", carroscreados[i].Modelo);
            printf("Escribe el color del auto[%d]: \n", i+1);
            fflush(stdin);
            scanf("%s", carroscreados[i].Color);
            printf("Escribe el tipo del auto[%d]: \n", i+1);
            fflush(stdin);
            scanf("%s", carroscreados[i].TipoDeAuto);

            printf("\n");     
    }


}

void imprimirDatosAutomvil(Automovil  *carroscreados, int cantidadAutos){
    printf("Datos Carro: \n");
    for(int i=0; i<cantidadAutos; i++){
         printf("Marca del carro[%d]: \t%s\n", i+1, carroscreados[i].Marca);
         printf("Modelo del carro[%d]: \t%s\n", i+1, carroscreados[i].Modelo);
         printf("Color del carro[%d]: \t%s\n", i+1, carroscreados[i].Color);
         printf("Tipo de carro[%d]: \t%s\n", i+1, carroscreados[i].TipoDeAuto);
         printf("\n\n");
    }
}

