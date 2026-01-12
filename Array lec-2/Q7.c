//wap to decending order in 1d array.
#include<stdio.h>

void main()
{
	int n,i,j,temp;
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("Array in decending Order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

}

