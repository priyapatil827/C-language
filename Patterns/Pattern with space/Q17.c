//        1
//      1 0
//    1 0 1
//  1 0 1 0
//1 0 1 0 1

#include<stdio.h>

void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
