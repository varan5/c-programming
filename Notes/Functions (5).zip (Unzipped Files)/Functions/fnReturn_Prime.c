//Program to find whether the given number is a prime number or not using a function.
//Revision of return

#include<stdio.h>

int checkPrime(int x)//x is the formal parameter (a copy of actual parameter)
{
  int i;

  for(i=2; i<=x/2; i++)
  {
    if(x %i == 0)
    {//T
      return 0; //factor found
    }
  }//for
  return 1; //no factor found
}

int main()
{
  int n;//the number to check for being prime
  int result;

  printf("Enter a number ");
  scanf("%d", &n);//25,29

  result = checkPrime(n);

  if(result == 1)
    printf("%d is prime ", n);
  else if(result == 0)
    printf("%d is not prime ", n);
  return 0;
}
