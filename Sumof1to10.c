#include <stdio.h>
int main()
{
    int sum=0;
    
    for (int i = 0; i <= 10; i++)
    {
        sum += i;
    }
    printf("The Sum of all numbers from 1 to 10 is %d",sum);
    

    return 0;
}