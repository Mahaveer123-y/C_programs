#include <stdio.h>
//factorialRecursive method
int
factorialIterative (int n)
{
  int val = 1;
  for (int i = n; i > 1; i--)
    {
      val *= i;
    }
  return val;
}

//factorialIterative method
int
factorialRecursive (int n)
{
  if (n == 0 || n == 1)
    {
      return 1;

    }
  else
    {
      return n * factorialRecursive (n - 1);
    }
}

int
main ()
{
  int n;
  printf ("Enter the value of number for factorial calculation \n");
  scanf ("%d", &n);
  int factorial = factorialRecursive (n);
  //int factorial = factorialIterative(n);

  printf ("the value of factorial is %d\n", factorial);
  return 0;
}
