#include <stdio.h>

int main()
{
   int r, c, i, j;

   printf("Enter rows and columns: ");
   scanf("%d %d", &r, &c);

   int a[r][c], t[c][r];

   printf("\nEnter elements of matrix:\n");
   for(i = 0; i < r; i++)
   {
      for(j = 0; j < c; j++)
      {
         printf("a[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
   }

   for(i = 0; i < r; i++)
   {
      for(j = 0; j < c; j++)
      {
         t[j][i] = a[i][j];
      }
   }
   
   printf("\nOriginal Matrix:\n");
   for(i = 0; i < r; i++)
   {
      for(j = 0; j < c; j++)
      {
         printf("%d\t", a[i][j]);
      }
      printf("\n");
   }

   printf("\nTranspose Matrix:\n");
   for(i = 0; i < c; i++)
   {
      for(j = 0; j < r; j++)
      {
         printf("%d\t", t[i][j]);
      }
      printf("\n");
   }

   return 0;
}

