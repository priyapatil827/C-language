//WAP to print the multiplication table of each array element.
#include<stdio.h>

void main()
{
	int n,i,j;
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("\nMultiplication table of %d:\n",a[i]);
		for(j=1;j<=10;j++)
		{
			printf("%d * %d = %d\n",a[i],j,a[i]*j);
		}
	}
}
