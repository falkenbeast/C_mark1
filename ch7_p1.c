#include <stdio.h>      //pointers 
  int main() {
    int i = 8;    //store 8 as a value of i
    int *j = &i;   //'*' indicates that j is a pointer of a and '&' indicates the address of i
    int *j2;
    int *j3 = NULL;
    int *k=&i;
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);   // '*j' will give the value of the variable stored in j
    printf("the value of i is %d\n",*k);
    printf("the address if i is %p\n", &i); // '&i' will give the address of i and %u is the format specifier
    printf("the address of i is %p\n", j); // j will give the address of i as it is a pointer and %u is the format specifier for a pointer
    printf("the address of j is %p\n", &j); // this will give the address of j as &j contains address of j
    printf("the value of j is %p\n", *(&j));  //this will give the value of j which is the adress of i
    printf("the garbage value of null pointer j2 is %p\n", j2);
    printf("the garbage value of null pointer j3 is %p\n", j3);

 /*there can be n numbers of point pointing each other just we have to increase the * in it 
   for example -:
   int i = 73,
   int *j = &i;
   int **k = &j;  
*/

  return 0;
}