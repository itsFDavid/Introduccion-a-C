#include <stdio.h>


int main(){
    int longitudSerie=50;

    for(int i=1; i<=(longitudSerie/2); i++){
        if(i>1) printf(", ");
        printf("%d", 2*i);
        printf(", %d", 3*i);
    }
    printf("\n");

    return 0;
}