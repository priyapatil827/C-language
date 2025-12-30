// WAP to Find min. no. from given 2 no. using if else.
#include<stdio.h>
#include<conio.h>

void  main()
{
	int num1,num2;
	printf("Enter num1 : ");
	scanf("%d",&num1);
	printf("Enter num2 : ");
	scanf("%d",&num2);
	
	if(num1<num2)
	{
		printf("Minimum is : %d\n",num1);
	}
	else if(num2<num1)
	{
		printf("Minimum is : %d\n",num1);
	}
	else
	{
		printf("both number are equal");
	}
}
