#include <stdio.h>

int main(){
    int vector[100];
    int i=0;
    while (i<100){
        ++i;
        printf("2* %d = %d \n", i, (vector[i]= i * 2));
    }
    return 0;
}