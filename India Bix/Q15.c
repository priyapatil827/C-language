//Look at this series: 544, 509, 474, 439, ... What number should come next?
#include<stdio.h>

void main()
{
	int a=544;
	int i;
	
	printf("%d ",a);
	
	for(i=1;i<=5;i++)
	{
		a-=35;
		printf(" %d ",a);
	}
}
