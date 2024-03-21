#include <stdio.h>

void multiplyMatrices(int m1, int n1, int m2, int n2, int first[][10], 
                        int second[][10], int result[][10]);
int main(){
    int firs[10][10], second[10][10], result[10][10];
    int m1,n1,m2,n2;

    printf("Introduce numero de filas y columnas de la primera matriz:\n");
    scanf("%d %d", &m1, &n1);
    printf("Introduce numero de filas y columnas de la segunda matriz:\n");
    scanf("%d %d", &m2, &n2);
    if(n1!= m2){
        printf("No se puede no son iguales");
        return 0;
    }
    printf("Ingresa los datos de la primera matriz\n");
    for(int i=0; i<m1; ++i){
        for(int j=0; j<n1; ++j){
            scanf("%d", &firs[i][j]);
        }
    }
    printf("Ingresa los datos de la segunda matriz\n");
    for(int i=0; i<m2; ++i){
        for(int j=0; j<n2; ++j){
            scanf("%d", &second[i][j]);
        }
    }
    multiplyMatrices(m1,n1,m2,n2, firs, second, result);
    for(int i=0; i<m1; ++i){
        for(int j=0; j<n1; ++j){
            printf("%d ", firs[i][j]);
            if (j==n2-1)
                printf("\n");   
        }
    }
    for(int i=0; i<m2; ++i){
        for(int j=0; j<n2; ++j){
            printf("%d ", second[i][j]);
            if (j==n2-1)
            {
                printf("\n");
            }   
        }
    }
    printf("El resultado de las matrices es: \n");
    for(int i=0; i<m1; ++i){
        for(int j=0; j<n2; ++j){
            printf("%d ", result[i][j]);
            if (j==n2-1)
            {
                printf("\n");
            }   
        }
    }
    return 0;
}


void multiplyMatrices(int m1, int n1, int m2, int n2, int first[][10], int second[][10], int result[][10]){
    for(int i=0; i<m1; ++i){
        for(int j=0; j<n2; ++j){
            result[i][j]=0;
        }
    }
     for(int i=0; i<m1; ++i){
        for(int j=0; j<n2; ++j){
            for(int k=0; k<n1; ++k){
            result[i][j]= first[i][k]* second[k][j];
            }
        }
    }
        
}