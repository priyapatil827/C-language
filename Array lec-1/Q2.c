//Write a Program to find the average of a 1D array.
#include<stdio.h>

void main()
{
	int n,i;
	float sum,average;
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter array elements: \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	
	average = sum/n;
	
	printf("Average of an Array=%.2f ",average);

}

