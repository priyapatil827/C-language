//WAP TO CHECK USER IS ELIGIBLE FOR VOTE OR NOT.
#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	printf("Enter Age : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Eligible for vote");
	}
	else
	{
		printf("Not Eligible for vote");
	}
}
