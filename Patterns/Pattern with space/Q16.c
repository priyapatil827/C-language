//A B C D E
//  B C D E
//    C D E
//      D E
//        E

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
		for(j=i;j<='E';j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
