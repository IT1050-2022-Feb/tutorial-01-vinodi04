/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int n1,n2,sum;
  float avg;
  printf("n1:");
  scanf("%d",&n1);
  printf("n2:");
  scanf("%d",&n2);
  sum=n1+n2;
  avg=sum/2.0;
  printf("avg:%.2f",avg);
  
  return 0;
}

