
int main()
{
	int r,c,i,j;
	printf("enter a row:");
	scanf("%d",&r);
	printf("enter a col:");
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
	printf("\n");
		for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",a[j][i]);
			
		}
		printf("\n");
	}
}

