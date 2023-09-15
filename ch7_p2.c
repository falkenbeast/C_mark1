#include <stdio.h>             //array pointers 
int main()
{
    // char a = '3';
    // char* ptra = &a;
    // printf("%d\n", ptra);
    // ptra--;
    // printf("%d\n", ptra);
    // printf("%d", ptra-2);
    int arr[] = {311,52,3,4,5,6,67};
    int* arrayptr = arr; //no use 
    printf("Value at position 3 of the array is                 %d\n", arr[2]);
    printf("Address of element at position 3 of the array is    %p\n", &arr[2]);
    printf("Value at position 1 of the array is                 %d\n", arr[0]);
    printf("address of first element of the array is            %p\n", &arr[0]);
    printf("Value at position 2 of the array is                 %d\n", arr[1]);
    printf("address of second element of the array is           %p\n", &arr[1]);

    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", arr[0]);
    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", arr[1]);
    printf("The value at address of second element of the array is %d \n", *(arr + 1));

    return 0;
}
