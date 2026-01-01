//Look at this series: 8, 6, 9, 23, 87 , ... What number should come next?
#include<stdio.h>

void main()
{
	int a=8;
	int i;
	
	printf("%d ",a);
	for(i=1;i<=5;i++)
	{
		a = a*i-(i+1);
		printf("%d ",a);
	}
}
