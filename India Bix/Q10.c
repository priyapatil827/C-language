//Look at this series: 31, 29, 24, 22, 17, ... What number should come next?
#include<stdio.h>

void main()
{
	int a=31;
	int i;
	
	printf("%d ",a);
	
	for(i=1; i<=5;i++)
	{
		if(i%2!=0)
		{
			a-=2;
		}
		else
		{
			a-=5;
		}
		printf(" %d ",a);
	}
}
