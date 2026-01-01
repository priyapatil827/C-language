//Look at this series: 80, 10, 70, 15, 60, ... What number should come next?
#include<stdio.h>

void main()
{
	int a=80;
	int b=10;
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("%d ",a);
		printf("%d ",b);
		
		a-=10;
		b+=5;
	}
}
