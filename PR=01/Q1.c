//Develop a program that converts temperature form degrees celsius to fahrenheit using the formula : F=(9/5*C)+32.
#include<stdio.h>
#include<conio.h>

void main()
{
	float celsius,fahrenheit;
	printf("Enter a celsius :");
	scanf("%f",&celsius);
	
	fahrenheit=(1.8*celsius)+32;
	printf("Temperature in fahrenheit = %.2f ",fahrenheit);
}
