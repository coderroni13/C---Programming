#include <stdio.h>
int isPrime(int n) {
     if (n < 2) {
      return 0;
     }
     for(int i = 2; i * i <= n; i++) {

        //is not prime.
        if (n % i == 0) {
           return 0;
        }
     }
     // n is prime
      return 1;
}
int main() {
    int n;
    printf("Enter any positive number");
    scanf("%d",&n);

    if (isPrime(n)) {
      printf("%d is a prime number ",n);
    } else {
      printf("%d is not a prime number ",n);
    }

   return 0;
}
