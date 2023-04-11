#include <stdio.h>


//Finds the largest number from 10 number of arrays.
int largest( int arr[]){
    int large=0;

    for (int i = 0; i < 10; i++)
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
    int numberArr[10];
    
    printf("\n\t\"Enter 10 number you want to find the largest of\"\n\n");
    
    for (int i = 0; i < 10; i++)
    {
         if (i == 0)
        {
            printf("Enter the value of %dst number: ", i + 1);
        }
        else if (i == 1)
        {
            printf("Enter the value of %dnd number: ", i + 1);
        }
        else if (i == 2)
        {
            printf("Enter the value of %drd number: ", i + 1);
        }
        else
        {
            printf("Enter the value of %dth number: ", i+1);
        }
        scanf("%d", &numberArr[i]);
    }
    

    int largestNumber = largest(numberArr);
    printf("\nThe largest Number is %d", largestNumber);

    return 0;
}