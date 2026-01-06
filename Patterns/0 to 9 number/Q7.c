//* * * *
//* 
//* * * *
//*     *
//* * * *

#include<stdio.h>

void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
			if((i==1) || (i==3) || (i==5) || (i==2 && j==1) || (i==4 && j==1) || (i==4 && j==4))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}

