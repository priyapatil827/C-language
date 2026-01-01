//Look at this series: 22, 21, 23, 22, 24, 23, ... What number should come next?
#include<stdio.h>
#include<conio.h>

void main()
{
	int a=22;
	int i;
	
	printf("%d",a);
	
	for(i=1;i<=6;i++)
	{
		if(i%2!=0)
		{
			a-=1;
		}
		else
		{
			a+=2;
		}
		printf(" %d ",a);
	}
}
