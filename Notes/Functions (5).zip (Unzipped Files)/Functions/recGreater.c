//Study of recursion
//Program to find greater of 4 numbers

//Mathematical Study:
//gr(4) = 4th number compare gr(3)
//gr(3) = 3rd number compare gr(2)
//gr(2) = 2nd number compare gr(1)
//gr(1) = number itself

//Hence recursive solution available

//In generic terms:
//gr(n) = n compare gr(n-1)

//Base condition:
//gr(1) = number itself

//See; recGreater.png

int greater(int n)
{
  int x, y;
  printf("Enter a number: ");
  scanf("%d", &x);// nth number
  if(n > 1)
  {
    y = greater(n-1);
    return x>y ? x : y;
  }
  else
    return x;//greater itself
}

int main()
{
  int n;
  int max;
  printf("\n How many numbers to compare: ");
  scanf("%d", &n);

  max = greater(n);
  printf("\nGreatest number : %d", max);

  return 0;
}
