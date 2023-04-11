#include <stdio.h>

//Finds the Average of 10 number.
double average(int arr[]){
    double sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum +=arr[i];
    }
    return sum/10;
    
}


int main()
{
    int number[10];

    for (int i = 0; i < 10; i++)
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

        scanf("%d", &number[i]);
    }


    double avarageof10= average(number);

    printf("\nThe Avarage is: %.2lf", avarageof10);


    return 0;
}