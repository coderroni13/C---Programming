
#include <stdio.h>

float avg(float a, float b, float c, float d)
{
    return (a+b+c+d)/4;

}

float main()
{
    float a,b,c,d;
    printf("Enter four numbers: ");
    scanf("%f %f %f %f",&a,&b,&c,&d);

    printf("The result is: %f\n",avg(a,b,c,d));
    return 0;
}
