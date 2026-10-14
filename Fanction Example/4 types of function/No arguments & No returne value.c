
#include<stdio.h>

void avg(){
    float a,b,c,d;
    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &a,&b,&c,&d);
    float avg = ((a+b+c+d)/4);
    printf(" The result is: %f\n", avg);
}
int main (){
    avg();
    return 0;
}

