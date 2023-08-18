#include <stdio.h>  //operator precedence 
int main()
{
        int x = 2;
        int y = 3;
        printf("the value of 3*x - 8*y is %d\n", 3*x - 8*y); // order is 1st it is (*,/,%)  then 2nd is (+,-) and at last (=)
        printf("the value of 8*y / 3*x is %d\n", 8*y / 3*x );  // in the case of a tie we move left to right
        return 0;

}