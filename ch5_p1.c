#include <stdio.h>        //functions 
void display();   //function prototype
void calculate();  
  int main() {
   display();       //function call
   calculate();
   return 0;
} 
void display(){                     //function definition
        printf("this is a displaying function\n");

}
void calculate()
{
        printf("this is a calculating function\n");
        display();    //any number of functions can be called inside any other function
}