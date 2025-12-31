//wap to find leap year form 2000 to 3000 using for loop.
#include<stdio.h>
#include<conio.h>

void main()
{
	int year=2000;
	for(year;year<=3000;year++)
	{
		if(year%4==0)
		{
			printf(" %d ",year);
		}
	}
}
