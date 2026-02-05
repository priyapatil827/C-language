#include<stdio.h>
#include<string.h>

int main()
{
	char str[20] , rev[20];
	int i, length;
	
	printf("Enter a string : ");
	scanf("%s",str);
	
	length = strlen(str);
	
	for(i=0;i<length;i++)
	{
		rev[i]=str[length-i-1];
	}
	
	rev[length]='\0';
	
	if(strcmp(str,rev)==0)
	{
		printf("String is Palindrome");
	}
	else
	{
		printf("String is not Palindrome");
	}
}
