#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	int i,j,count;
	
	printf("Enter a String : ");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		count = 1;
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				count++;
				str[j]='\0';
			}
		}
		printf("%c = %d\n",str[i],count);
	}
}
