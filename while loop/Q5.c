//wap to print odd no. from 1 to N using while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	int i=1;
	
	while(i<=n)
	{
		if(i%2==1)
		{
			printf(" %d ",i);
		}
		i++;
	}
}
