#include <stdio.h>     //control instruction  (conditional instructions)
//    types of operators : 1st is comparetive operators like ==, >=, <=, !=  then 2nd logical operator 
//    like &&,||,=  and at last there are conditional operators like if,else. also check operator precedence

int main(){
   int a=23;
   if (a>18){                  //if-else_if-else_if_ladder statement 
      printf("you can drive \n");
    }
    
   int b = 6;
   if(b<4)
   {
        printf("statement 1\n");
   }
   else if (b>5 && b<10)
   {
        printf("statement 2 \n");
   }
   else 
   printf("statement 3 \n");
   printf("its an end \n");
   //now see the ternary operators 
  (a<5) ? printf("this is less than five\n") : printf("this is grater than five\n");  //Condition ?  expression-if-true :  expression-if-false
return 0;
}