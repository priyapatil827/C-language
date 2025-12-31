//wap to print even no. from N to 1 using while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	
	while(n>=1)
	{
		if(n%2==0)
		{
			printf(" %d ",n);
		}
		n--;
	}
}
