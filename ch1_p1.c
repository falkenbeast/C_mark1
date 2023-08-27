#include <stdio.h>           //variabls and printing in code
int main()
{
        printf("this is chapter one \n");
        /* List of variable and their formate specifier */
        
        char c = 'u';  //%c, %hhi for signed, %hhu for unsigned
        short s = 31; // %hi signed , %hu unsigned
        int a = 4; // %d signed , %i unsigned
        long int l = 46; //  %li
        float b = 5.6; // %f
        double d = 858.356; // %lf
        int g = 45;
        int e = 45+5;
    
        printf("the value of a is %c \n",c);
        printf("the value of s is %hi\n",s);
        printf("the value of a is %d \n",a);    //in this %d is a format specifier for int and \n is
                                               //  and \n is used to shift cursor to the next line.
        
        printf("the value of l is %li\n",l);  
        printf("the value of a is %f \n",b);
        
        printf("the value of a is %d \n",a+g);
        printf("the value of a is %d \n",e);

        return 0;

}
