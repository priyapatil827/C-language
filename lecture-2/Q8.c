//wap to perimeter of circle.
#include<stdio.h>
#include<conio.h>

void main()
{
	float radius;
	float pie=3.14;
	float ans;
	
	printf("Enter radius :");
	scanf("%f",&radius);
	
	ans = 2 * pie * radius;
	printf("Perimeter of circle : %.2f ",ans);
	
	
}
