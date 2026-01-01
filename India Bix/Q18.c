//Look at this series: 5.2, 4.8, 4.4, 4, ... What number should come next?
#include<stdio.h>

void main()
{
	float a=5.2;
	float i;
	printf("%.1f ",a);
	
	for(i=1;i<=5;i++)
	{
		a-=0.4;
		printf(" %.1f ",a);
	}
}
