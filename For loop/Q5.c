//wap to print odd no. from 1 to N using for loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=1;
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf(" %d ",i);
		}
	}
}
