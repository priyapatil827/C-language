//Write a C program that uses pointers to swap the values of two integers.
// Implement a function for the swapping operation.
#include<stdio.h>

int swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;	
}

void main()
{
	int a,b;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	
	swap(&a , &b);
	
	printf("\nAfter swapping value\n a = %d \n b = %d",a,b);
}
