#include<stdio.h>

int main()
{
	char str[] = "hello world";
	char *p = str;
	int length = 0;
	
	while(*p++)
	{
		length++;
	}
	printf("Length of the string is = %d",length);
	
	return 0;
}
