#include <stdio.h>

//Finds the largest value from N number of Arrays.

int largest(int n, int arr[]){
    int large=0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]> large)
        {
            large=arr[i];
        }
        else{
            large=large;
        }
        
    }
    return large;
    
}

int main()
{
    int n, numberArr[1000];
    
    printf("\nHow many number you want to test the largest of?\n");
    printf("=====> ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
         if (i == 0)
        {
            printf("Enter the valur of %dst number: ", i + 1);
        }
        else if (i == 1)
        {
            printf("Enter the valur of %dnd number: ", i + 1);
        }
        else if (i == 2)
        {
            printf("Enter the valur of %drd number: ", i + 1);
        }
        else
        {
            printf("Enter the value of %dth number: ", i+1);
        }
        scanf("%d", &numberArr[i]);
    }
    

    int largestNumber = largest(n, numberArr);
    printf("\nThe largest Number of %d number is %d",n, largestNumber);

    return 0;
}