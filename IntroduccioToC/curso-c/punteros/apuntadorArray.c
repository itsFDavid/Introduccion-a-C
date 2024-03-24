#include <stdio.h>

int main(){

    int array[5]={1,2,3,4,5};

    int* pointerArray= &array[0];
    int i=0;

    while(*pointerArray != 5){
        printf("[%d]: %d\n", i, *pointerArray);
        pointerArray++;
        i++;
    }
    return 0;
}