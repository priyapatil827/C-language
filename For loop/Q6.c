//wap to print even no. from N to 1 using for loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=1;
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		if(i%2==0)
		{
			printf(" %d ",i);
		}
	}
}
