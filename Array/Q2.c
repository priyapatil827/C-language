
#include<stdio.h>
int main()
{
	int n,i;
	 int largest, secondLargest;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	 if(a[0] > a[1]) {
        largest = a[0];
        secondLargest = a[1];
    } else {
        largest = a[1];
        secondLargest = a[0];
    }

	printf("\n");
	for(i = 2; i < n; i++) {
        if(a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if(a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    printf("The second largest number is: %d\n", secondLargest);

	
}

