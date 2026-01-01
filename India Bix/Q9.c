//Look at this series: 8, 22, 8, 28, 8, ... What number should come next?
#include<stdio.h>
#include<conio.h>

void main()
{
	int a=22;
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("8 ");
		printf("%d ",a);
		a+=6;
	}
}
