#include <stdio.h>
#include <math.h>
int main()
{
    int flag = 1, n;
    scanf("%d",&n);

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag==1)
    {
        printf("The number %d is a prime Number\n", n);
    }
    else
    {
        printf("The number %d is not a prime number\n", n);
    }
    return 0;
}
