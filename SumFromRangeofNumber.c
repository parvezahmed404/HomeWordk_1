#include <stdio.h>

int main()
{
    int first, last, sum = 0;
    printf("\nEnter the First Number of Range: ");
    scanf("%d",&first);
    printf("\nEnter the last Number of Range: ");
    scanf("%d",&last);

    if (first>last)
    {
        for (int i = first; i >= last; i--)
    {
        sum += i;
    }
    printf("\nThe sum of range %d to %d is %d", last, first, sum);
    }
    else{

        for (int i = first; i <= last; i++)
    {
        sum += i;
    }
    printf("\nThe sum of %d to %d is %d", first, last, sum);

    }
    
    return 0;
}