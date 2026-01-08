// Write a Program to perform the addition operation of two 1D arrays & and store it in 
//another array. Keep in mind that both array sizes must be the same.

#include<stdio.h>

void main()
{
	int n,i;
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n],b[n],sum[n];
	printf("Enter elements of first array:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	printf("Enter elements of second array:\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		sum[i] = a[i] + b[i];
	}
	
	printf("\n");
	
	printf("Sum of two arrays:\n");
	for(i=0;i<n;i++)
	{
		printf("sum[%d] = %d\n",i,sum[i]);
	}
}
