//wap to perform all arithmetic operators such as +,-,*,/
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	printf("Enter num1 :");
	scanf("%d",&x);
	printf("Enter num2 :");
	scanf("%d",&y);
	printf("Addition : %d + %d = %d\n",x,y,x+y);
	printf("Subtraction : %d - %d = %d\n",x,y,x-y);
	printf("Multiplication : %d * %d = %d\n",x,y,x*y);
	printf("Division : %d / %d = %d\n",x,y,x/y);
}
