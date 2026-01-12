
#include <stdio.h>

int main() {
    int arr[100], n, i, choice, pos, value;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(1) {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Update element\n");
        printf("4. Display array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Insert
                printf("Enter the position to insert (1 to %d): ", n+1);
                scanf("%d", &pos);
                if(pos < 1 || pos > n+1) {
                    printf("Invalid position!\n");
                    break;
                }
                printf("Enter the value to insert: ");
                scanf("%d", &value);

                // Shift elements to the right
                for(i = n; i >= pos; i--) {
                    arr[i] = arr[i-1];
                }
                arr[pos-1] = value;
                n++;
                printf("Element inserted successfully.\n");
                break;

            case 2: // Delete
                printf("Enter the position to delete (1 to %d): ", n);
                scanf("%d", &pos);
                if(pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                    break;
                }

                // Shift elements to the left
                for(i = pos-1; i < n-1; i++) {
                    arr[i] = arr[i+1];
                }
                n--;
                printf("Element deleted successfully.\n");
                break;

            case 3: // Update
                printf("Enter the position to update (1 to %d): ", n);
                scanf("%d", &pos);
                if(pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                    break;
                }
                printf("Enter the new value: ");
                scanf("%d", &value);
                arr[pos-1] = value;
                printf("Element updated successfully.\n");
                break;

            case 4: // Display
                printf("Array elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 5: // Exit
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}


