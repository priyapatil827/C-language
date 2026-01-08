//Write a Program to find the length of a 1D array.
#include<stdio.h>

void main()
{
	int n,a[n],i;
	printf("Enter array size : ");
	scanf("%d",&n);
	
	printf("Enter array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	printf("Length of an array = %d",n);
}
