//Look at this series: 7, 10, 8, 11, 9, 12, ... What number should come next?
#include<stdio.h>
#include<conio.h>

void main()
{
   int a = 7;
   int i;

   printf("%d ", a);  

   for(i = 1; i <= 6; i++)
   {
      if(i % 2 != 0)
      {
      	a += 3;
		}
      else
      {
      	a -= 2; 
		}
      printf("%d ", a);
    }
}

