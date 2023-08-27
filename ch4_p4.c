#include<stdio.h>  //break keyword
int main() 
{ 
	int i,age; 
	for(i = 0 ; i < 5 ; i++) 
	{ 

		printf("Iteration time = %d\nEnter Your Age : ",i ); 
		scanf("%d",&age); 
		if (age>10) 
		{ 
			break; // brings out of the current loop
		} 
		// if(age<10) 
		// { continue; } 
		// printf("Hey Guys\n"); 
		// printf("This code is printed coz if condition is not satisfied. \n"); 
		// printf("Checking Continue Statement\n\n"); // Checking Continue Statement 
	} return 0; 
} 
