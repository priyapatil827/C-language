#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter r:");
	scanf("%d",&r);
		printf("enter c:");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
				printf("enter a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
			
		}
		
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		
		
	}
	for(i=0;i<c;i++)
	{
		
		int sum=0;
			for(j=0;j<r;j++)
			{
				sum=sum+a[j][i];
			}
				printf("sum of column %d=%d\n",i,sum);

			
		
	}
	
}
