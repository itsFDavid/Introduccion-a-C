#include <stdio.h>

int main(){
    int i=0;
    int j=0;
    printf("\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
    while (i<=10){
        printf("%d\t", i);
        j=0;
        while (j<=10){
            printf("%d\t", i*j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}