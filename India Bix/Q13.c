//Look at this series: 2, 4, 6, 8, 10, ... What number should come next?
#include<stdio.h>

void main()
{
	int a=2;
	int i;
	
	printf("%d ",a);
	
	for(i=1;i<=5;i++)
	{
		a+=2;
		printf(" %d ",a);
	}
}
