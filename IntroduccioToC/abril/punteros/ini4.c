#include <stdio.h>
#include <stdlib.h>


int main(){
    char c='z';
    char *p= &c;
    char **ppc= &p;
    char ***pppc= &ppc;

    printf("EL valor de c es %c\n", c);
    printf("EL valor de *p es %c\n", *p);
    printf("EL valor de *ppc es %c\n", **ppc);
    printf("EL valor de ***pppc es %c\n", ***pppc);

    ***pppc='m';
    printf("El valor de c es %c\n", c);
    

    return 0;
}