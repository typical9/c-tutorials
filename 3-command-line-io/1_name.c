#include <stdio.h>

int main(int argc, char **argv) {
   // This is where we will hold the name
   char userName[10] = {'\0'};
   scanf("%s", userName);
   printf("Hello, %s!\n", userName);
   return 0;
}
