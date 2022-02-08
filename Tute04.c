/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int n1,int n2);//function declaration 
int maximum(int n1,int n2);
int multiply(int n1,int n2);

int main() {
   int no1, no2;//declare variables
   printf("Enter a value for no 1 : ");//enter no 1
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");//entr no 2
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));// print min
   printf("%d ", maximum(no1, no2));//print max
   printf("%d ", multiply(no1, no2));// print multiply
   return 0;
}

int minimum(int n1,int n2)//find minimum
{
  if(n1<=n2)
    return n1;
  else
    return n2;  
}

int maximum(int n1,int n2)//find maximum
{
  if(n1<=n2)
    return n2;
  else
    return n1;  
}

int multiply(int n1,int n2)// find thr multiply
{
  return n1*n2;
}