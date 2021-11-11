#include <stdio.h>

int main (int argc, char **argv) {
   int number1 = 0;
   int number2 = 0;

   printf("Please enter a number below\n");
   scanf("%d", &number1);
   printf("Now please enter another number below\n");
   scanf("%d", &number2);
   
   printf("The sum of %d and %d is %d\n", number1, number2, number1 + number2);

   return 0;

}