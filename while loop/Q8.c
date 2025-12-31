//wap to print sum 1 to N using while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=1,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("Sum from 1 to %d = %d",n,sum);
}
