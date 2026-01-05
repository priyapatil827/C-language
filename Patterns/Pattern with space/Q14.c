//        A
//      A B
//    A B C
//  A B C D
//A B C D E

#include<stdio.h>

void main()
{
	char i,j;
	int k;
	for(i='A';i<='E';i++)
	{
		for(k='E';k>i;k--)
		{
			printf("  ");
		}
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
