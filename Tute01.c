/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int m1,m2; //declar variables
  float avg;

  printf("Enter mark 1: "); //input mark 1
  scanf("%d",&m1);
  printf("Enter mark 2: ");//input mark 2
  scanf("%d",&m2);

  avg = (m1+m2)/2.0; // find average

  printf("Average is %.2f\n",avg);//print average
  
  return 0;
}

