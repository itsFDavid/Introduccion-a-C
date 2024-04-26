#include <stdio.h>


int main(){

    int x=5, y=7;
    int *const p = &x;
    printf("Valor de p es %d\n", *p);
    *p=3;
    //p=&y;
    printf("El valor de p es %d\n", *p);
    return 0;
}