#include <stdio.h>

int main()
{
   int r, c, i, j;

   printf("Enter rows and columns: ");
   scanf("%d %d", &r, &c);

   int a[r][c];

   printf("\nEnter elements of matrix:\n");
   for(i = 0; i < r; i++)
   {
      for(j = 0; j < c; j++)
      {
         printf("a[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
   }

   printf("\nSum of each row:\n");
   for(i = 0; i < r; i++)
   {
      int rowSum = 0;
      for(j = 0; j < c; j++)
      {
         rowSum += a[i][j];
      }
      printf("Row %d = %d\n", i + 1, rowSum);
   }
   
   printf("\nSum of each column:\n");
   for(j = 0; j < c; j++)
   {
      int colSum = 0;
      for(i = 0; i < r; i++)
      {
         colSum += a[i][j];
      }
      printf("Column %d = %d\n", j + 1, colSum);
   }

   return 0;
}

