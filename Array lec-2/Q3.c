//Write a Program to find square of each element from the given array.
#include<stdio.h>

void main()
{
	int n,i;
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	printf("The squares are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]*a[i]);
	}
}
