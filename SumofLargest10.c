#include <stdio.h>



int main() {
    int arr[1000];
    int n, i, j, temp;
    int sum = 0;

   
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    do
    {
        printf("Array size must be larger than 10\nEnter again: ");
        scanf("%d", &n);
    } while (n<10);
    

    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Large to smaller
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    
    for (i = 0; i < 10; i++) {
        sum += arr[i];
    }


    printf("The sum of the 10 largest numbers is %d\n", sum);

    return 0;
}
