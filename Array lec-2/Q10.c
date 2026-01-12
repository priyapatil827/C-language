//WAP to find average of 2D array.
#include<stdio.h>

void main()
{
	int r,c,i,j,sum=0,average;
	printf("Enter a row and columns :");
	scanf("%d %d",&r,&c);
	
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			sum = sum + a[i][j];
		}
	}
	average = sum/(r*c);
	printf("Average of 2D array = %d",average);
	
	
}
