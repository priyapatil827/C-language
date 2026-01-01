//Look at this series: 14, 28, 20, 40, 32, 64, ... What number should come next?
#include<stdio.h>

void main()
{
	int a=14;
	int i;
	
	printf("%d ",a);
	for(i=1;i<=5;i++)
	{
		if(i%2!=0)
		{
			a*=2;
		}
		else
		{
			a-=8;
		}
		printf("%d ",a);
	}
}
