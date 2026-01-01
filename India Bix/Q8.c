//Look at this series: 3, 4, 7, 8, 11, 12, ... What number should come next?
#include<stdio.h>
#include<conio.h>

void main()
{
	int a=3;
	int i;
	
	printf("%d",a);
	
	for(i=1;i<=6;i++)
	{
		if(i%2!=0)
		{
			a+=1;
		}
		else
		{
			a+=3;
		}
		printf(" %d ",a);
	}
}
