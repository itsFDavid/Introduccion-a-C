#include <stdio.h>
#include <math.h>

int main(){
    int vectorA[]={3, 5, 6, 8, 4, 7, 8, 5, 3, 1};
    int vectorB[]={3, 4, 6, 8, 9, 1, 2, 3, 0, 9};
    
    printf("Operacion 1: %d\n", vectorA[3] % (vectorB[2]/2));
    printf("Operacion 2: %d\n", vectorB[vectorA[1]] - vectorA[9]);
    printf("Operacion 3: %d\n", vectorA[0]+ vectorA[1+2]);
    printf("Operacion 4: %d\n", vectorA[5] + vectorB[5]);
    printf("Operacion 5: %d\n", (vectorA[3]/vectorB[2])/2);


    return 0;
}