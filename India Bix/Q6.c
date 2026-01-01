//Look at this series: 21, 9, 21, 11, 21, 13, 21, ... What number should come next?
#include<stdio.h>
#include<conio.h>

void main()
{
	int a=9;
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("21 ");
		printf("%d ",a);
		a+=2;
	}
}
