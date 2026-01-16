
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	printf("\n");
	printf("Negative elements from an array :");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
			
		}
		
	}
	
	
}

