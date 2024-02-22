/*
Hacer un programa en Lenguaje c que haga los siguientes calculos y 
muestre los resultados en pantalla.


a)  1/3 + 3/5 + 1/30            = 0.9768
    ////////////////            
        23/30
    
b) 5 + 2/1
    //////
    1+ 2/1
       ///
        2-/4
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float resultA, resultB;

    resultA= 1.0/3.0+3.0/5.0+1.0/30.0/(23.0/30.0);
    
    resultB= (5.0+(2.0/(1.0/(1.0+(2.0/(2.0-(1.0/4.0)))))));


    printf("%f\n", resultA);
    printf("%f\n", resultB);
    
    return 0;
}