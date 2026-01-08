//WAP to find the sum of a 1D array.
#include<stdio.h>

void main()
{
	int n,i,sum=0;
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
	
	printf("\n");
	
	printf("Sum of array:");
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
}
