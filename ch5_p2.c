#include <stdio.h>   //passing values to the function
int sum(int a, int b);
  int main() {
    int result = sum(3, 5);
    printf("the sum of the numbers is %d\n", result);
  return 0;
}
int sum(int a, int b)
{
        int result;
        result = a+b;
        return result;
}