//wap to find area of rectangle.
#include<stdio.h>
#include<conio.h>

void main()
{
	int length;
	int width;
	int ans;
	printf("Enter a length : ");
	scanf("%d",&length);
	printf("Enter a width : ");
	scanf("%d",&width);
	
	ans = length * width;
	printf("Area of rectangle : %d",ans);
	
}
