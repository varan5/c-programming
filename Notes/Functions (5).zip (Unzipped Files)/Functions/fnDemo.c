//Program to demonstrate:
//1) A function
//2) Its call and execution

//See: functions.png

#include<stdio.h>

void fx()
{
  printf("\n 1");
  printf("\n 2");
  printf("\n 3");
  printf("\n 4");
}

int main()
{
  printf("\n A");
  printf("\n B");
  printf("\n C");
  fx();//function call
  printf("\n D");
  printf("\n E");
  printf("\n F");
  return 0;
}
