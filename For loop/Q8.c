//wap to print sum 1 t N using for loop.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
	   sum=sum+i;
	}
	printf("sum is 1 to %d = %d",n,sum);
}

