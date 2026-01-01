//Look at this series: 1.5, 2.3, 3.1, 3.9, ... What number should come next?
#include<stdio.h>

void main()
{
	float a=1.5;
	float i;
	
	printf("%.1f ",a);
	
	for(i=1;i<=5;i++)
	{
		a+=0.8;
		printf(" %.1f ",a);
	}
}
