//wap to find area of triangle
#include<stdio.h>
#include<conio.h>

void main()
{
	float base;
	float height;
	float ans;
	printf("Enter Base of triangle : ");
	scanf("%f",&base);
	printf("Enter Height of triangle : ");
	scanf("%f",&height);
	
	ans = 0.5 * base * height;
	printf("Area of a triangle : %.2f",ans);
}
