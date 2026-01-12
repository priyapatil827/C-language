//Write a Program to find leap years between two given numbers and store them in an array. 
//And then print that array. Make this program in the shortest memory.

#include<stdio.h>

void main()
{
	int start,end,i;
	printf("Enter start year:");
	scanf("%d",&start);
	
	printf("Enter end year:");
	scanf("%d",&end);
	
	
	for(i=start;i<end;i++)
	{
		if(i%4==0)
		{
			printf("%d ",i);
		}
	}
	
	

	
}
