//wap to print 1 to N using for loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=1;
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf(" %d ",i);
	}
}
