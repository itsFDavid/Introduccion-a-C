#include <stdio.h>


int main(){
    int arr[]={12,23,62,98,1025,12,78,-1,6,7,9,12,11};
    int tamaño= sizeof(arr)/sizeof(arr[0]);
    printf("El tamaño es: %d\n", tamaño);
    printf("sizeof(arr): %ld\n", sizeof(arr));
    printf("sizeof(arr[0]): %ld\n", sizeof(arr[0]));
    int maximo= arr[0];
    for(int i=0; i<tamaño; i++){
        if (arr[i]>maximo){
            maximo= arr[i];
        }
    }
    printf("El numero mas grande es: %d\n", maximo);
    return 0;
}