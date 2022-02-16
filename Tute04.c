/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int main() 
{
   int no1, no2,multiply;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   if (no1>no2||no1<no2) 
   printf("maximum:%d",no1,no2);
   printf("minimum:%d",no1,no2);
   printf("maximum:%d",no1,no2);
   multiply=no1*no2;
   printf("multiply:%d",multiply,no1,no2);
   return 0;
}