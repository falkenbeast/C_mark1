#include <stdio.h>        //switch case 
  int main() {
        int a;
    printf("enter any number between 1 to 5\n");
    scanf("%d", &a);
    switch(a)
    {
        case 1: 
        printf("the number is 1\n");
        break;
        case 2: 
        printf("the number is 2\n");
        break;
        case 3:
        printf("the number is 3\n");
        break;
        case 4:
        printf("the number is 4\n");
        break;
        case 5:
        printf("the number is 5\n");
        break;
        default:
        printf("please enter any number between 1 to 5");

    }
  return 0;
}