// Wap to find minimum from the 1d array.
#include<stdio.h>

void main()
{
	int n,i,min;
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	printf("Minimum number is: %d", min);
}

