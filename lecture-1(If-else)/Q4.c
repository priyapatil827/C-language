//WAP to Find if a given no. is neutral or not using ladder if else.
#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("Enter num : ");
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("Number is neutral\n");
	}
	else if(num>0)
	{
		printf("Number is not neutral -> it is positive");
	}
	else
	{
		printf("Number is not neutral -> it is negative");
	}
}
