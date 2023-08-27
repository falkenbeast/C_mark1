#include<stdio.h>   //One dimensional array

int main()
{
        int marks[10], sum=0;
        printf("Enter marks of 10 students : \n\n");
        for (int i=0;i<=9;i++)
        {
        printf("Marks of %d student : ", i+1);
	scanf("%d", &marks[i]);
        sum += marks[i];
        }	
        printf("the marks of 10 students are : \n");
        for (int i=0;i<=9;i++)
        {
         printf("Marks of %d student are: %d \n", i+1, marks[i]);
        }
        int average = sum/10;
	printf("\nThe average marks of 10 students are %d", average);
	return 0;


}
