#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d", &x,&y,&z);
    if(x>y & x>z) {
        printf("the largest number is x.");
    }
    else if (y>x & y>z) {
       printf(" the largest number is y");
    }
    else{
        printf("the largest number is z");
    }
    return 0;
}
