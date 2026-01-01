//Look at this series: 201, 202, 204, 207, ... What number should come next?
#include<stdio.h>

void main()
{
	int a=201;
	int i;
	
	printf("%d ",a);
	
	for(i=1;i<=5;i++)
	{
		a+=i;
		printf(" %d ",a);
	}
}
