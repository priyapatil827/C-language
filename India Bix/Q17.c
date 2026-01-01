//Look at this series: 2, 6, 18, 54, ... What number should come next?
#include<stdio.h>

void main()
{
	int a=2;
	int i;
	
	printf("%d ",a);
	for(i=1;i<=5;i++)
	{
		a*=3;
		printf("%d ",a);
	}
}
