//WAP to Find max. from 4 using ternary operator.
#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int a,b,c,d;
 	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	//a,b,c,d
   (a > b) ? ((a > c) ? ((a > d) ? printf("a is max") : printf("d is max")):
   ((c > d) ? printf("c is max") : printf("d is max"))):
	((b>c)? ((b>d)?printf("b is max"):printf("d is max")):
	((c>d)?printf("c is max"):printf("d is max")));
	
 }
