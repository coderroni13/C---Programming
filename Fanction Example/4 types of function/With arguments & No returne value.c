
#include <stdio.h>

void avg(float a, float b, float c, float d)
{
    float avg = ((a+b+c+d)/4);
    printf("result=%f",avg);
}

float main()
{
    float a,b,c,d;
    printf("Enter four numbers: ");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    avg(a,b,c,d);
    return 0;
}

