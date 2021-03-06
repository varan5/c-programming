//Study of recursion
//Program to find factorial of a number recursively.

//Mathematical Study:
//5! = 5*4*3*2*1
//4! = 4*3*2*1
//Hence, 5! = 5 * 4!
//Hence recursive solution available

//In generic terms:
//n! = n * (n-1)!

//Base condition:
//0! = 1

//See: recFactorial.png

int fact(int n)
{
  if(n >0)
    return n * fact(n-1);
  else
    return 1;//base condition
}

int main()
{
  int n;
  int ans;
  n = 5;//scan

  ans = fact(n);
  printf("\n %d! = %d", n , ans);

  return 0;
}
