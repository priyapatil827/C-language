//*  *
//*    *
//*      *
//*       *
//*      *
//*    *
//*  *

#include<stdio.h>

void main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=8;j++)
		{
			if(j == 1 || (i == 1 && j == 4) || (i == 2 && j == 6) || (i == 3 && j == 7) || (i == 4 && j == 8) || (i == 5 && j == 7) || (i == 6 && j == 6) || (i == 7 && j == 4))
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
