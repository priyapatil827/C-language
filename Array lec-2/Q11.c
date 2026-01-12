//WAP to perform row-wise sum of 2D array.
#include <stdio.h>

int main()
{
    int r, c, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    // Input
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Row-wise sum
    printf("\nRow-wise sum:\n");
    for(i = 0; i < r; i++)
    {
        sum = 0;
        for(j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
        printf("Sum of row %d = %d\n", i, sum);
    }

    return 0;
}

