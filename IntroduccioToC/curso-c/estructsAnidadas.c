#include <stdio.h>
#include <string.h>

struct infoDireccion{
    char direccion[50];
    char ciudad[50];
    char provincia[50];
};

struct empleado{
    char nombre[50];
    struct infoDireccion dirEmpleado;
    double salario;
};

int main(){
    

    int count=0;
    printf("Ingresa cuantos empleados quieres registrar: ");
    scanf("%d", &count);
    getchar();
    struct empleado empleados[count];

    for(int i=0; i<count; i++){
        printf("\nIngrese nombre para empleado [%d]: ", i);
        fgets(empleados[i].nombre, sizeof(empleados[i].nombre), stdin);
        strtok(empleados[i].nombre, "\n");

        printf("Ingrese direccion para empleado [%d]: ", i);
        fgets(empleados[i].dirEmpleado.direccion, sizeof(empleados[i].dirEmpleado.direccion), stdin);
        strtok(empleados[i].dirEmpleado.direccion, "\n");

        printf("Ingrese ciudad para empleado [%d]: ", i);
        fgets(empleados[i].dirEmpleado.ciudad, sizeof(empleados[i].dirEmpleado.ciudad), stdin);
        strtok(empleados[i].dirEmpleado.ciudad, "\n");

        printf("Ingrese provincia para empleado [%d]: ", i);
        fgets(empleados[i].dirEmpleado.provincia, sizeof(empleados[i].dirEmpleado.provincia), stdin);
        strtok(empleados[i].dirEmpleado.provincia, "\n");

        printf("Ingresa salario para persona [%d]: ", i);
        scanf("%lf", &empleados[i].salario);
        getchar();
    }
    for(int i=0; i<count; i++){
        printf("\nNombre de empleado [%d]: %s\n", i, empleados[i].nombre);
        printf("Direccion de empleado [%d]: \n\tDireccion: %s\n\tCiudad: %s\n\tProvincia: %s\n", i, 
            empleados[i].dirEmpleado.direccion,empleados[i].dirEmpleado.ciudad, empleados[i].dirEmpleado.provincia);
        printf("Salario de empleado [%d]: %.2f\n", i, empleados[i].salario);
    }

    return 0;
}
