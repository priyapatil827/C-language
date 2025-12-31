//wap to print n to 1 using while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	int i;
	
	while(n>=1)
	{
		printf(" %d ",n);
		n--;
	}
}
