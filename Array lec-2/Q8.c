//WAP to get & print 2D array of N elements.
#include<stdio.h>

void main()
{
	int r,c,i,j;
	printf("Enter row and columns :");
	scanf("%d %d",&r, &c);
	
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	
	printf("2D array is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
