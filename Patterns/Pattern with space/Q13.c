//        A
//      B A
//    C B A
//  D C B A
//E D C B A

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
		for(j=i;j>='A';j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
