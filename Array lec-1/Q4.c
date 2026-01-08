//WAP to get & print 1D array of N elements.
#include<stdio.h>

void main()
{
	int n,i;
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter array elements : \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
