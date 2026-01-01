//Look at this series: 36, 34, 30, 28, 24, ... What number should come next?
#include<stdio.h>
#include<conio.h>

void main()
{
	int a=36;
	int i;
	
	printf("%d",a);
	
	for(i=1;i<=6;i++)
	{
		if(i%2!=0)
		{
			a-=2;
		}
		else
		{
			a-=4;
		}
		printf(" %d ",a);
	}
}
