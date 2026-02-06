//Write a C program that prompts the user to enter an integer. 
//Using a loop, calculate and display the factorial of that number.
#include<stdio.h>

void main()
{
	int num,i;
	float fact=1;
	printf("Enter an integer : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact*=i;
	}
	
	printf("Factorial is %d is %.2f\n",num,fact);
}

