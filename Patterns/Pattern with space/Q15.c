//A B C D E
//  A B C D
//    A B C
//      A B
//        A

#include<stdio.h>

void main()
{
	char i,j;
	int k;
	
	for(i='A';i<='E';i++)
	{
		for(k='A';k<i;k++)
		{
			printf("  ");
		}
		for(j='E';j>=i;j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
