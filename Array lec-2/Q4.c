//Wap to find maximum from the 1d array.
#include<stdio.h>

void main()
{
	int n,i,max;
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	printf("Maximum number is: %d", max);
}

