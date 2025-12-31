//Create a program that calculates the gross salary by adding precentages of HRA,DA and TA to the base salary as chosen by the user.

#include<stdio.h>
#include<conio.h>
int main()
{
	int salary,hra,da,ta;
	printf("enter salary : ");
	scanf("%d",&salary);
	printf("enter hra : ");
	scanf("%d",&hra);
	printf("enter da : ");
	scanf("%d",&da);
	printf("enter ta : ");
	scanf("%d",&ta);
	int gross=salary+hra+da+ta;
	printf("gross salary is %d",gross); 	
}

