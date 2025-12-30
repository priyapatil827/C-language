//wap to swap two variable(without using third variable).
#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int b;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping value A :%d\n",a);
	printf("After swapping value B :%d",b);
}
