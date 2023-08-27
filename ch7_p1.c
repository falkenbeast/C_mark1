#include <stdio.h>      //pointers 
  int main() {
    int i = 8;    //store 8 as a value of i
    int *j = &i;   //'*' indicates that j is a pointer of a and '&' indicates the address of i
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);   // '*j' will give the value of the address stored in j
    printf("the address if i is %u\n", &i); // '&i' will give the address of i and %u is the 
    printf("the address of i is %u\n", j); // j will give the address of i as it is a pointer and %u is the format specifier for a pointer
    printf("the address of j is %u\n", &j); // this will give the address of j as &j contains address of j
    printf("the value of j is %d\n", *(&j));  //this will give the value of j which is the adress of i

 /*there can be n numbers of point pointing each other just we have to increase the * in it 
   for example -:
   int i = 73,
   int *j = &i;
   int **k = &j;  
*/

  return 0;
}