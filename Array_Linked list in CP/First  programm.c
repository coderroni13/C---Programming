#include<stdio.h>
int main()
{
  /*
    int num1=20,num2=30;
    printf("Number are %d, %d\n",num1,num2);
    getch();
*/
/*
    int a = 40;
    float num1 = 10.5;
    double num2 = 10.525252525252525;
    char ch = 'a';

    printf("A number print = %d\n",a);
    printf("num1 = %.1f\n",num1);
    printf("num2 = %lf\n",num2);
    printf("ch = %c",ch);


    //write a program that takes an integer and print that number

    int num;
    printf("Please enter an integer: ");
    scanf("%d",&num);
    printf("You have pressed: %d\n",num);


    // user input two integer number two float numbers
    int a,b;
    float num1,num2;
    printf("Enter two integer and float number: ");
    scanf("%d %d %f %f",&a, &b, &num1,&num2);
    printf("Numbers are : %d %d %.2f %.2f",a,b,num1,num2);

   //user input character number print

   char character;
   printf("Enter any character: ");
   //scanf("%c",&character);
   character = getchar();
   //printf("You entered: %c\n",character);
   putchar(character);


char name [50];
printf("Enter your name: ");
//scanf("%s",&name);
//gets(name);
fgets(name, sizeof(name), stdin);
    //size_t len = strlen(name);
        //if (name [len -1] = '\n') {
       // name[len - 1] = '\0';}

//printf("Hello %s\n", name);
puts(name);
*/
/*
//size of int,float,double,char
int i;
float f;
double d;
char c;

printf("size of int  = %d bytes\n",sizeof(i));
printf("size of float  = %d bytes\n",sizeof(f));
printf("size of double  = %d bytes\n",sizeof(d));
printf("size of char = %d bytes\n",sizeof(c));
*/

/*Ascii value to ascii character value
int n;
printf("Enter any ASCII value: ");
scanf("%d",&n);                             //Capital ('A-Z'  65-90) & small (a-z : 97-122)
printf("The Ascii character is : %c",n);
*/

/*Ascii character to ascii value
char ch;
printf("Enter any ascii character: ");
scanf("%c",&ch);
printf("The ascii value is: %d",ch);
*/

/*lowercase to uppercase letter convert
char lower;
printf("Enter any lowercase letter: ");
scanf("%c",&lower);
printf("The uppercase letter: %c",lower-32);
*/

/*Uppercase to lowercase letter convert
char upper;
printf("Enter any uppercase letter: ");
scanf("%c",&upper);
printf("The lowercase letter: %c",upper+32);
*/

/*lowercase to upper case use libary function
char lower,upper;
printf("Enter any lower case letter : ");
scanf("%c",&lower);
upper = toupper(lower);
printf("Uppercase letter = %c",upper);
*/

/*Uppercase to lowercase letter use libary function
char lower,upper;
printf("Enter any uppercase letter: ");
scanf("%c",&upper);
lower  =  tolower(upper);
printf("Lowercase letter: %c",lower);
*/

/*decimal to octal number
int number;
printf("decimal number: ");
scanf("%d",&number);
printf("octal number = %o",number);
*/

/*octal to decimal number
int number;
printf("octal number: ");
scanf("%o",&number);
printf("Decimal number = %d",number);
*/

/*decimal to hexa decimal
int number;
printf("Decimal number = ");
scanf("%d",&number);
printf("Hexa-decimal numbr = %x",number);
*/

/*hexa-decimal to decimal number
int number;
printf("Hexa-decima number = ");
scanf("%x",&number);
printf("Decimal number = %d",number);
*/
/* octal to hexa-decimal number
int number;
printf("octal number = ");
scanf("%o",&number);
printf("Hexa-decimal number = %x",number);
*/

/*hexa-decimal to octal number
int number;
printf("hexa-decimal number =  ");
scanf("%x",&number);
printf("octal number = %o",number);
*/
}
