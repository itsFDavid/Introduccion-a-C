#include <stdio.h>

int x=1, y=100;

int tablaMulti(int a, int num){
    if(a>10) return 0;

    printf("\t%d * %d: %d\n", num, a, a*num);
    return a * tablaMulti((a+1), (num));
}

int tablasMulti(int a, int num){
    if(num<1) return 0;
    puts("");
    printf("-----Tabla de multiplicar de %d----\n", num);
    tablaMulti(a, num);
    return a* tablasMulti((a),(num-1));
}


int main(){


    printf("%d\n", tablasMulti(x,y));

    return 0;
}


