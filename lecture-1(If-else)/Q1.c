//WAP TO CHECK NUMBER IS POSITIVE, NEGATIVE OR NEUTRAL USING NESTED IF ELSE.
#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("Enter num : ");
	scanf("%d",&num);
	
	if(num>=0)
	{
		if(num==0)
		{
			printf("Number is neutral");
		}
		else
		{
			printf("Number is positive");
		}
	}
	else
	{
		printf("Number is negative");
	}
}
