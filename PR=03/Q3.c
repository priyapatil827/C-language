#include<stdio.h>

void main()
{
	int n,lastDigit,firstDigit,sum;
	printf("Enter n :");
	scanf("%d",&n);
	
	lastDigit = n%10; 
	while(n>10) 
	{
		n = n / 10;
	}
	firstDigit=n;
	sum=firstDigit+lastDigit;
	printf("Sum of first and last digit is = %d",sum);
}
