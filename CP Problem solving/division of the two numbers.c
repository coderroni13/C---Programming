#include<stdio.h>
int main()
{
    int a,b,div;
    scanf("%d %d",&a,&b);
    if (b != 0){
        div = a/b;
        printf("%d",div);
    }
    else {
        printf("division not possible");
    }
}
