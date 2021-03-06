//Program to find lcm of 2 numbers
//Revision of : functions, parameters, return, ternary, while and break statements
//See: lcm.png

#include<stdio.h>

int lcm(int x, int y)
{
  int i, greaterNo;
  greaterNo = x>y?x:y; //greater of 2 numbers

  i = greaterNo;
  while(1)
  {
    if(i %x == 0  && i %y == 0)
      break;//terminate the loop
    i+=greaterNo; //i=i+greaterNo; 
  }
  return i;
}

int main()
{
  int n1, n2;
  int ans;

  printf("Enter 2 numbers ");
  scanf("%d%d", &n1,&n2);

  ans = lcm(n1,n2);

  printf("LCM: %d", ans);

  return 0;
}
