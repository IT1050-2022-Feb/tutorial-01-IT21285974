/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int n,i;//declare vatiables
  int Total=0;

  printf("Enter n value: ");// enter nth value
  scanf("%d",&n);

  for(i=1; i<=n; i++)
  {
    Total = i+Total;//find total
  }

  printf("Sum is %d\n",Total);//print total
  
  return 0;
}

