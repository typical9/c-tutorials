#include <stdio.h>

int main (int argc, char **argv) {
   char name[10] = {'\0'};
   int age = 0;

   printf("Please enter your name below\n");
   scanf("%s", name);
   printf("Now please enter your age below (in years)\n");
   scanf("%d", &age);
   
   printf("Your name is %s and you are %d years old!\n", name, age);

   return 0;

}