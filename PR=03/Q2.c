#include<stdio.h>

void main()
{
	int n,count=0;
	printf("Enter n :");
	scanf("%d",&n);
	
	if(n==0)
	{
		count=1;
	}
	else
	{
		while(n!=0)
		{
			n = n/10;
			count++;
		}
	}
	printf("Total num of digits is = %d",count);
}
