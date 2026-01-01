//Look at this series: 53, 53, 40, 40, 27, 27, ... What number should come next?
#include<stdio.h>
#include<conio.h>

void main()
{
	int a=53;
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("%d %d ",a,a);
		a-=13;
	}
}
