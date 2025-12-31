//wap to print the multiplication table of N using for loop
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1; i<=10; i++)
	{
	   printf("%d * %d = %d\n",n,i,n*i);
	}
}


