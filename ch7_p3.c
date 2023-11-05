#include <stdio.h> //array pointers
  int main() {
    int a[3] = {1,2,3};
    int *p=a;     //*creates a copy array a[] and memory of each and every variable will sorted and well placed so we can reduce variable counts;
    for(int i=0;i<3;i++)
    {
      printf("%d ",*p);
      p++;
    }
    
  return 0;
}