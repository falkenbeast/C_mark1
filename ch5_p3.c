#include <stdio.h>                 //recursion
  int factorial(int x);
  int main() {
    int a = 5;
    printf("the value of factorial of 5 is %d\n", factorial(a));
  return 0;
}
int factorial(int x)
{
      if (x==1||x==0)
        return 1;
        else 
        return x+factorial(x-1);
}