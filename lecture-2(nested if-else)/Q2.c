//WAP to Find min. from given 3 no. using nested if else.
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	
	//a,b,c
	if(a<b)
	{
		//a,c
		if(a<c)
		{
			//a
			printf("a is minimum");
		}
		else
		{
			//c
			printf("c is minimum");
		}
	}
	else
	{
		//b,c
		if(b<c)
		{
			//b
			printf("b is minimum");
		}
		else
		{
			//c
			printf("c is minimum");
		}
	}
}
