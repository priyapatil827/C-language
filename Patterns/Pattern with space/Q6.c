//        5
//      4 4
//    3 3 3
//  2 2 2 2
//1 1 1 1 1

#include<stdio.h>

void main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(k=1;k<i;k++)
		{
			printf("  ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
