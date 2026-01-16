
#include<stdio.h>

void main()
{
	int r,c,i,j;
	printf("Enter a row and columns :");
	scanf("%d %d",&r,&c);
	
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
   }
   
   int max=a[0][0];
   for(i=0;i<r;i++)
   {
   	for(j=0;j<c;j++)
   	{
   		if(a[i][j]>max)
   		{
   			max = a[i][j];
			}
		}
		
	}
	printf("Largest elements is : %d\n",max);
	
	
}
