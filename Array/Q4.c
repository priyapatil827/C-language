
#include <stdio.h>

int main() {
    int arr[5][5];
    int i, j, sum = 0;

    // Input the 5x5 array
    printf("Enter 25 elements for the 5x5 array:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nBoundary elements are:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
      
            if(i == 0 || i == 4 || j == 0 || j == 4) {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            }
        }
    }

    printf("\nSum of boundary elements = %d\n", sum);

    return 0;
}


