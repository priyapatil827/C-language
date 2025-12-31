//wap to calculate the factorial of N. using while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=1,factorial=1;
	printf("Enter n:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		factorial = factorial * i;
		i++;
	}
	printf("Factorial of %d = %d",n,factorial);
}
