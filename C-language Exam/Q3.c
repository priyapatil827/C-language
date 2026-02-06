//Create a C program that defines a function to check if a given number is a leap year or not.
#include<stdio.h>

int leapyear(int y)
{
	if(y%4==0)
	{
		printf("Year is a leap");
	}
	else
	{
		printf("Year is not a leap");
	}
}

void main()
{
	int year;
	printf("Enter a year : ");
	scanf("%d",&year);
	
	leapyear(year);
	
}
