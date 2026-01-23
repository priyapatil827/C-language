#include<stdio.h>

int add(int a,int b)
{
	return a + b;
}
int sub(int a,int b)
{
	return a - b;
}
int multiply(int a,int b)
{
	return a * b;
}
int divide(int a,int b)
{
	return a / b;
}
int module(int a,int b)
{
	return a % b;
}


int main()
{
	int a,b,choice;
	
	while(1)
	{
		printf("\nPress 1 for +\n");
		printf("Press 2 for -\n");
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for %\n");
		printf("Press 0 for the exit\n");
		
		printf("\n");
		
		printf("Enter your choice : ");
		scanf("%d",&choice);
		
		if(choice==0)
		{
			printf("Exit\n");
			break;
		}
		
		printf("Enter first number :");
		scanf("%d",&a);
		printf("Enter second number :");
		scanf("%d",&b);
		
		printf("\n");
		
		switch(choice)
		{
			case 1 :
				printf("Addition = %d\n",add(a,b));
				break;
				
			case 2 :
			   printf("Subtraction = %d\n",sub(a,b));
				break;
		
			case 3 :
			   printf("Multiplication = %d\n",multiply(a,b));
				break;
			
			case 4 :
			   printf("Division = %d\n",divide(a,b));
				break;
			
			case 5 :
			   printf("Module = %d\n",module(a,b));
				break;				
		}
	}
}











