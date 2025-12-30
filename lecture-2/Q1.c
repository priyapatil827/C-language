//wap to swap two variable (with using third variable).
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("After swapping value A : %d\n",a);
	printf("After swapping value B : %d",b);
}
