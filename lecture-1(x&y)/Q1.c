//wap to find a the answer given formula (x+y)2.
#include<stdio.h>
#include<conio.h>

void main()
{
	float x;
	float y;
	float ans;
	
	printf("Enter x : ");
	scanf("%f",&x);
	printf("Enter y : ");
	scanf("%f",&y);
	
	ans = (x*x)-(2*x*y)+(y*y);
	printf("Result of = %f",ans);
	
}
