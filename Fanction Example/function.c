#include<stdio.h>
void avg()
{
    float a,b,c,d;
    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &a,&b,&c,&d);
    float avg =((a+b+c+d)/4);
    printf("Avarege number is : %f\n",avg);
}
float main()
{
    avg();
    return 0;
}
