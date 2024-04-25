#include <stdio.h>
#include <string.h>

void empleado();
void atleta();

struct EMPLEADO{
    char nombre[50];
    char sexo[50];
    float sueldo;
};
struct ATLETA{
    char deporte[50];
    char nombre[50];
    char pais[50];
    int n_medallas;
};


int main(){
    
    empleado();
    atleta();

    return 0;
}

void atleta(){
    struct ATLETA atleta[10];
    int mayor = 0;
    for(int i = 0; i < 10; i++){
        fflush(stdin);
        puts("Ingresa el deporte que practica");
        fgets(atleta[i].deporte, 50, stdin);
        strtok(atleta[i].deporte, "\n");

        puts("Ingresa tu nombre");
        fgets(atleta[i].nombre, 50, stdin);
        strtok(atleta[i].nombre, "\n");

        puts("Ingresa tu pais");
        fgets(atleta[i].pais, 50, stdin);
        strtok(atleta[i].pais, "\n");

        fflush(stdin);
        puts("Ingresa el numero de medallas que ha ganado");
        scanf("%d", &atleta[i].n_medallas);
    }
    for(int i = 0; i < 10; i++){
        if(atleta[i].n_medallas > mayor){
            mayor = atleta[i].n_medallas;
        }
        puts("La informacion de el atleta es: ");
        puts("\t---------------------------------");
        printf("\t| Deporte\t| %s\n", atleta[i].deporte);
        printf("\t| Nombre\t| %s\n", atleta[i].nombre);
        printf("\t| Pais\t\t| %s\n", atleta[i].pais);
        printf("\t| N.medallas\t| %d\n", atleta[i].n_medallas);
        puts("\t---------------------------------");
        printf("\n\n");
        fflush(stdin);
    }
    puts("El atleta con mas medallas es: ");
    for(int i = 0; i < 10; i++){
        if(atleta[i].n_medallas == mayor){
            puts("La informacion de el atleta es: ");
            puts("\t---------------------------------");
            printf("\t| Deporte\t| %s\n", atleta[i].deporte);
            printf("\t| Nombre\t| %s\n", atleta[i].nombre);
            printf("\t| Pais\t\t| %s\n", atleta[i].pais);
            printf("\t| N.medallas\t| %d\n", atleta[i].n_medallas);
            puts("\t---------------------------------");
            printf("\n\n");
        }
    }

}


void empleado(){
    fflush(stdin);
    struct EMPLEADO empleado[5];
    puts("\t\t .....................");
    puts("\t\t .: EMPRESA DATACIC :.");
    puts("\t\t .....................");
    for(int i = 0; i < 5; i++){
        fflush(stdin);
        puts("Ingresa tu nombre");
        fgets(empleado[i].nombre, 50, stdin);
        strtok(empleado[i].nombre, "\n");
        
        puts("Ingresa tu sexo");
        fgets(empleado[i].sexo, 50, stdin);
        strtok(empleado[i].sexo, "\n");
        fflush(stdin);
        puts("Ingresa tu sueldo");
        scanf("%f", &empleado[i].sueldo);
        fflush(stdin);
    }
    for(int i = 0; i < 5; i++){
        puts("La informacion de el empleado es: ");
        puts("\t---------------------------------");
        printf("\t| Nombre\t| %s\n", empleado[i].nombre);
        printf("\t| Sexo\t\t| %s\n", empleado[i].sexo);
        printf("\t| Sueldo\t| %.2f\n", empleado[i].sueldo);
        puts("\t---------------------------------");
        printf("\n\n");

    }
}