/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int mark1, mark2;
   float aveg;
   
   printf("Enter The Marks of two subjects :");
   scanf("%d %d", &mark1,&mark2);
   
   aveg=(mark1+mark2)/2;
   
   printf("Average of the two marks=%.2f", aveg);
  
  return 0;
}

