//Look at this series: 58, 52, 46, 40, 34, ... What number should come next?
#include<stdio.h>
#include<conio.h>

void main()
{
	int a=64;
	int i;
	
	for(i=1;i<=5;i++)
	{
		a-=6;
		printf(" %d ",a);
	}
	
}
