//WAP to Find max. from given 4 no. using nested if else.
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&d);
	
	//a,b,c,d
	if(a>b)
	{
		//a,c,d
		if(a>c)
		{
			//a,d
			if(a>d)
			{
				//a
				printf("a is maximum");
			}
			else
			{
				//d
				printf("d is maximum");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c is maximum");
			}
			else
			{
				//d
				printf("d is maximum");
			}
		}
	}
	else
	{
		//b,c,d
		if(b>c)
		{
			//b,d
			if(b>d)
			{
				printf("b is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c is maximum");
			}
			else
			{
				//d
				printf("d is maximum");
			}
		}
	}
}
