//wap to print N to 1 using for loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		printf(" %d ",i);
	}
}
