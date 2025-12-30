//wap to simple interest.
#include<stdio.h>
#include<conio.h>

void main()
{
	float principal,rate,time,simpleInterest;
	
	printf("Enter principal amount : ");
	scanf("%fs",&principal);
	printf("Enter Rate of interest : ");
	scanf("%f",&rate);
	printf("Enter Time : ");
	scanf("%f",&time);
	
	simpleInterest = (principal*rate*time)/100;
	
	printf("Simple Interest = %.2f",simpleInterest);
	
	
}
