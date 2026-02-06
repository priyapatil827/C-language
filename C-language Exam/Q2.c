//Develop a C program that reads a sentence from the user. 
//Create a function to count the occurrences of each vowel in the sentence and display the counts.
#include<stdio.h>
#include<string.h>

int countvowel()
{
	int a=0,e=0,i=0,o=0,u=0;
	int j=0;
	
	while(str[j]!='\0')
	{
		if(str[j]=='a'||str[j]=='A')
		{
			a++;
		}
		else if(str[j]=='e'||str[j]=='E')
		{
			e++;
		}
		else if(str[j]=='i'||str[j]=='I')
		{
			i++;
		}
		else if(str[j]=='o'||str[j]=='O')
		{
			o++;
		}
		else if(str[j]=='u'||str[j]=='U')
		{
			u++;
		}
	}
}


void main()
{
	
	int str[20];
	
	printf("Enter a string : ");
	scanf("%s",str);
	
	countvowel(str);
}
