//WAP to find a the answer given formula (x-y)3.
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
	
	ans = (x*x*x)-(y*y*y)-3*x*y*(x-y);
	printf("Ans is = %f",ans);
	
}
