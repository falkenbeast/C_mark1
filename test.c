#include <stdio.h>
add(int a,int b)
{
  printf("add=%d\n",a+b);
}
void sub(int a, int b)

{
  printf("sub=%d\n",a-b);
}
void mul(int a, int b)
{
  printf("mul=%d\n",a*b);
}
  int main() {
  void(*fun[])(int,int)={add,sub,mul};
  int ch;
  int a,b;
  prin   
  return 0;
}