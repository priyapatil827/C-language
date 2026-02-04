#include<stdio.h>

int cube(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		*ptr = *ptr * *ptr * *ptr;
		ptr++;
	}
}

void main()
{
	int n,i,j;
	printf("Enter array's size = ");
	scanf("%d",&n);
	
	int a[n][n];
	printf("Enter array elements : \n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	cube(&a[0][0],n*n);
	
	printf(" Cube of array elements : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
