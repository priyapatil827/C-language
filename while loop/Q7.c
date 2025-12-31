//wap to find leap year from 2000 to 3000 using while loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int year=2000;
	while(year<=3000)
	{
		if(year%4==0)
		{
			printf(" %d ",year);
		}
		year++;
	}
}
