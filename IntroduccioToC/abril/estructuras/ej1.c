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
    struct ATLETA atleta;
    fflush(stdin);
    puts("Ingresa el deporte que practica");
    fgets(atleta.deporte, 50, stdin);
    strtok(atleta.deporte, "\n");

    puts("Ingresa tu nombre");
    fgets(atleta.nombre, 50, stdin);
    strtok(atleta.nombre, "\n");

    puts("Ingresa tu pais");
    fgets(atleta.pais, 50, stdin);
    strtok(atleta.pais, "\n");

    fflush(stdin);
    puts("Ingresa el numero de medallas que ha ganado");
    scanf("%d", &atleta.n_medallas);

    puts("La informacion de el atleta es: ");
    puts("\t---------------------------------");
    printf("\t| Deporte\t| %s\n", atleta.deporte);
    printf("\t| Nombre\t| %s\n", atleta.nombre);
    printf("\t| Pais\t\t| %s\n", atleta.pais);
    printf("\t| N.medallas\t| %d\n", atleta.n_medallas);
    puts("\t---------------------------------");
    printf("\n\n");
    fflush(stdin);
}


void empleado(){
    fflush(stdin);
    struct EMPLEADO empleado;
    puts("\t\t .....................");
    puts("\t\t .: EMPRESA DATACIC :.");
    puts("\t\t .....................");
    puts("Ingresa tu nombre");
    fgets(empleado.nombre, 50, stdin);
    strtok(empleado.nombre, "\n");
    
    puts("Ingresa tu sexo");
    fgets(empleado.sexo, 50, stdin);
    strtok(empleado.sexo, "\n");
    fflush(stdin);
    puts("Ingresa tu sueldo");
    scanf("%f", &empleado.sueldo);

    puts("La informacion de el empleado es: ");
    puts("\t---------------------------------");
    printf("\t| Nombre\t| %s\n", empleado.nombre);
    printf("\t| Sexo\t\t| %s\n", empleado.sexo);
    printf("\t| Sueldo\t| $%.2f\n", empleado.sueldo);
    puts("\t---------------------------------");
    printf("\n\n");
    fflush(stdin);
}