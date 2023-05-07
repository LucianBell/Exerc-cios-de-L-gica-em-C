//Write a program that checks whether a given number is prime or not.
#include <stdio.h>

int main()
{
   int num, i, flag = 0;
   
   printf("Enter a positive number: ");
   scanf("%d", &num);
   
   if (num < 0) {
    printf("Enter a POSITIVE number, try again!\n");
    return 0;
   }
   
   // Condition for non-prime
   for (i = 2; i <= num / 2; ++i) {
      if (num % i == 0) {
         flag = 1;
         break;
      }
   }
   
   if (num == 1) {
      printf("1 is not a prime number.\n");
   }
   else {
      if (flag == 0)
         printf("%d is a prime number.\n", num);
      else
         printf("%d is not a prime number.\n", num);
   }
}
