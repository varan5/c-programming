//Program to study: Pass By Value
//See: functions.png

#include<stdio.h>

void fx(int x) //x is the formal parameter that receives data of actual parameter
{
  printf("\n in fx(), x : %d",x);//10
  x++;//update
  printf("\n in fx(), x : %d",x);//11
}

int main()
{
  int x = 10; // a variable
  printf("\n in main(), x : %d", x);//10
  fx(x);//a function call with x as actual parameter
  printf("\n in main(), x : %d", x);//10

  return 0;
}
