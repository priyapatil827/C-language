//* * * * 
//      *
//  * * * * *
//      *
//      *	 

#include<stdio.h>

void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6;j++)
		{
			if((i==1 && j==1) || (i==1 && j==2) || (i==1 && j==3) || (j==4) || (i==3 && j==2) || (i==3 && j==3) || (i==3 && j==5) || (i==3 && j==6))
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
