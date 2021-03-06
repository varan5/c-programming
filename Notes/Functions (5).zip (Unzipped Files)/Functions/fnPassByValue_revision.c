//Revision of Pass by Value
//Swapping the copy(formal parameter), not the original (actual parameter)
//See: functions.png

#include<stdio.h>

void swap(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}

int main()
{
  int x,y;
  int q;

  x = 10; //scan
  y = 20; //scan

  printf("\n %d %d", x,y);//10 20
  swap(x,y);//call to swap with x and y as actual parameters
  printf("\n %d %d", x,y);//10 20

  return 0;
}
