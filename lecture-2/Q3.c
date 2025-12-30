//wap to find area of circle.
#include<stdio.h>
#include<conio.h>

void main()
{
	float radius;
	float ans;
	float pie=3.14;
	
	printf("Enter radius :");
	scanf("%f",&radius);
	
	ans = pie * radius * radius;
	printf("Area of a circle :%.2f",ans);
	
}
