// Write a program in C to copy the elements of one array into another array.
#include<stdio.h>

void main()
{
	int n,i;
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n],b[n];
	printf("Enter elements of first array:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	
	printf("Elements of second array after copying:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
}
