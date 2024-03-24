#include <stdio.h>

int array[4][5][2];
int *point;
int main(){{

    point= &array[0][0][0];
    int var=1;
    for(int i=0;i<4;i++){
        for(int j=0; j<5; j++){
            for(int k=0; k<2; k++){
                array[i][j][k]=var;
                var+=2;
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0; j<5; j++){
            for(int k=0; k<2; k++){
                printf("[%d]",array[i][j][k]);
            }
            puts("");
        }
        puts("");
    }
    int a= *(point+4);
    int b= *(point+16);
    int c= *(point+23);

    printf("a: %d\nb: %d\nc: %d\n", a, b, c);
    printf("a: %p\nb: %p\nc: %p\n", &a, &b, &c);


    point= &array[0][0][0];
    int count=0;
    for(int i=0;i<40;i++){
        if(i<10){
            *(point+i)= 4*(i+1);
        }
        if(i>=10 && i < 20){
            *(point+i)= 6*(i-9);
        }
        if(i>=20 && i < 30){
            *(point+i)= 7*(i-19);
        }
        if(i>=30 && i < 40){
            *(point+i)= 8*(i-29);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0; j<5; j++){
            for(int k=0; k<2; k++){
                printf("[%d]",array[i][j][k]);
            }
            puts("");
        }
        puts("");
    }

    return 0;
}}