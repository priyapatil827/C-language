//WAP to find sum of 2D array.
#include<stdio.h>

void main()
{
	int r,c,i,j,sum=0;
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
	printf("Sum of 2D array = %d",sum);
	
	
}

