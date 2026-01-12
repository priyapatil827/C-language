//Write a Program to perform the merge operation of two 1D arrays & store it in another array.
//Keep in mind that both array sizes can be different.

#include<stdio.h>

void main()
{
	int first,second,i;
	printf("Enter array A's size:");
	scanf("%d",&first);
	
	int a[first];
	for(i=0;i<first;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	printf("Enter array B's size:");
	scanf("%d",&second);
	int b[second];
	for(i=0;i<second;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	
	int c[first+second];
	for(i=0;i<first;i++)
	{
		c[i]=a[i];
	}
	
	for(i=0;i<second;i++)
	{
		c[first+i]=b[i];
	}
	
	printf("\n");
	
	printf("Array C is:");
	for(i=0;i<first+second;i++)
	{
		printf("%d ",c[i]);
	}
	
}
