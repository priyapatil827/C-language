//Write a program in C to read n number of values in an array and display them in reverse order.
#include<stdio.h>

void main()
{
	int n,i;
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	printf("Array elements in reverse order:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
