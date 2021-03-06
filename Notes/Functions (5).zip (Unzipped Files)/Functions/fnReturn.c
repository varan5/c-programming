//Program to find cube of  a number using function
//Study of function, parameters and return statement
//See: functions.png
//Interpret the comments

#include<stdio.h>

int cube(int x)//x is the formal parameter (a copy of actual parameter)
{
  int ans;
  ans = x*x*x;
  return ans;//terminate the function, make the program control go back to the point of call, carry value of ans along with.
}

int main()
{
  int num, result;
  printf("Enter a number ");
  scanf("%d", &num);
  result = cube(num);//call to cube with num as actual parameter
  printf("Cube of %d is %d ", num, result);
  return 0;
}
