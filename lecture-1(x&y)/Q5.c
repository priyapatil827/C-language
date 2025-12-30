//WAP to find a the answer given formula (x+y+z)3.
#include<stdio.h>
#include<conio.h>

void main()
{
	float x;
	float y;
	float z;
	float ans;
	
	printf("Enter x : ");
	scanf("%f",&x);
	printf("Enter y : ");
	scanf("%f",&y);
	printf("Enter z : ");
	scanf("%f",&z);
	
	ans = (x*x*x)+(y*y*y)+(z*z*z)+3*(x+y)*(y+z)*(z+x);
	printf("Ans is = %f",ans);
	
}
