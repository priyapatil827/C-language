//wap to calculate the factorial of N. using for loop.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1,fact=1;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
	   fact=fact*i;
	}
	printf("fact is %d",fact);
}


