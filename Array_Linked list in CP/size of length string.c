#include<stdio.h>
int main()
{
    char s1[] = "Akhrezzaman Rony";
    int i =0;
    int  len = 0;
    while (s1 [i] !='\0')
    {
      i++;
      len ++;
      printf("length = %d\n",len);
    }
}

#include<stdio.h>
int main()
{
    char s1 [] ="Rony";
    int len = strlen(s1);
    printf("Length = %d\n",len);
}
