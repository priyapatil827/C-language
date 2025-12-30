//WAP to Find min. from given 5 no. using nested if else.
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&d);
	printf("Enter e :");
	scanf("%d",&e);
	
	//a,b,c,d,e
	if(a<b)
	{
		//a,c,d,e
		if(a<c)
		{
			//a,d,e
			if(a<d)
			{
				//a,e
				if(a<e)
				{
					//a
					printf("A is minimum");
				}
				else
				{
					//e
					printf("E is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("D is minimum");
				}
				else
				{
					//e
					printf("E is minimum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				//c,e
				if(c<e)
				{
					printf("C is minimum");
				}
				else
				{
					//e
					printf("E is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("D is minimum");
				}
				else
				{
					//e
					printf("E is minimum");
				}
			}
		}
	}
	else
	{
		//b,c,d,e
		if(b<c)
		{
			//b,d,e
			if(b<d)
			{
				//b,e
				if(b<e)
				{
					//b
					printf("B is minimum");
				}
				else
				{
					//e
					printf("E is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("D is minimum");
				}
				else
				{
					//e
					printf("E is minimum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				//c,e
				if(c<e)
				{
					//c
					printf("C is minimum");
				}
				else
				{
					//e
					printf("E is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("D is minimum");
				}
				else
				{
					//e
					printf("E is minimum");
				}
			}
		}
	}
}
