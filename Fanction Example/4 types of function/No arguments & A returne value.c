#include<stdio.h>
float avg()
{
    float a,b,c,d;
    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float avg =((a+b+c+d)/4);
    return avg;
}
float main()
{
    float avg();
    printf("The result is: %f\n", avg());
}
