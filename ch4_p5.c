#include <stdio.h>   //continue keyword

int main()
{
    printf("Hello World\n");
    int i, age;
    for (i=0; i<10; i++){
        printf("%d\nEnter your age\n", i);   // this is the next iteration after continue statements after increment of i
        scanf("%d", &age);
        // if (age>10)
        // {
        //     break;
        // }
        if (age>10)
        {
            continue;      //skips all the below things and go to next iteration 
        }
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("Harry is a good boy\n");
        
    }
        return 0;
}

