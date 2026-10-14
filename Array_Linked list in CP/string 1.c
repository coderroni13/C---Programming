#include<stdio.h>
int main()
{
  //  char s1[5] ={'R', 'o', 'n', 'y', '\0'};    //basic stirng
    /*
    s1 [0] ='R';
    s1 [1] ='o';
    s1 [2] ='n';
    s1 [3] ='y';
    s1[4] ='\0';
    */

  //  printf("s1 = %s\n",s1);

                                                                // Input output string
    /*char s1[30];

    printf("Enter your full name");
    gets(s1);

  printf("Full name = %s\n",s1);
  */

/*  char s1[ ] ="sumona";                   //Display string character-wise
  int  i =0;
  while(s1[ i ] !='\0')
  {
      printf("%c\n",s1[i]);
      i++;
  }
  */
  /*
  char s1 [] ="Rony";
  int len = strlen(s1);
  printf("Length = %d\n",len);
  */
/*
  char s1[] = "Akhrezzaman Rony";
  int i =0;
 int  len = 0;
  while (s1 [i] !='\0')
  {
      i++;
      len ++;
      printf("length = %d\n",len);
  }
  */

  char source[] ="c programming";
  char target  [20];
  strcpy (target,source);
  printf("source string = %s\n", source);
  printf("target string =%s\n", target);
}

