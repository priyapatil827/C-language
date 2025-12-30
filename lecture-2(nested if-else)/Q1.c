//WAP to Find max. from given 2 no. using ternary operator.
#include<stdio.h>
#include<conio.h>

void main()
{
	int num1,num2,max;
   printf("Enter num1 : ");
	scanf("%d",&num1);
	printf("Enter num2 : ");
	scanf("%d",&num2);
	
	max = (num1>num2)?num1:num2;
	
	printf("Maximum number is : %d\n",max);
}
