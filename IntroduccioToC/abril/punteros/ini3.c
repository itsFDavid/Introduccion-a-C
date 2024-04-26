#include <stdio.h>

int x,y, *p;

void func(){
    x=40;
    p=&x;
    y=*p;
    *p=23;
}
int main(){
    
    func();
    y=*p;
    *p=25;
    printf("El valor de y es %d\nEl valor de *p es %d\nEL valor de p es %p\n", y, *p, p);

    return 0;
}