#include <stdio.h>

// Finds the Average of Any number.
double average(int n, int arr[])
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

// Finds the largest value from N number of Arrays.

int largest(int n, int arr[])
{
    int large = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
        else
        {
            large = large;
        }
    }
    return large;
}

// Sum From Range of Number.
int sumfrom(int first, int last)
{
    int sum = 0;
    if (first > last)
    {
        for (int i = first; i >= last; i--)
        {
            sum += i;
        }
        return sum;
    }
    else
    {

        for (int i = first; i <= last; i++)
        {
            sum += i;
        }
        return sum;
    }
}

int main() // main function.
{
    int select;
    int A, B, Arr[1000];
    char control;

    while (1)
    {
        printf("\n\t\tMain Menu\n");
        printf("--------------------------------------------------\n");
        printf("1. Enter \"1\" to see the Sum from 1 to 10.\n");
        printf("2. Enter \"2\" to Find the sum from range of number.\n");
        printf("3. Enter \"3\" to Find the largest of 10 number.\n");
        printf("4. Enter \"4\" to Find the average of 10 numbers.\n");
        printf("\n===> ");
        scanf("%d", &select);
        getchar();

        switch (select)
        {
        case 1:
            printf("\n\tSum From 1 to 10\n");

            printf("\t----------------\n");

            printf("\nThe sum from 1 to 10 is %d\n", sumfrom(1, 10));
            break;

        case 2:
            printf("\n\tSum From Range of Number\n");
            printf("\t------------------------\n");
            printf("\nEnter the First Number of Range: ");
            scanf("%d", &A);
            getchar();
            printf("\nEnter the last Number of Range: ");
            scanf("%d", &B);
            getchar();

            printf("The sum From %d to %d is %d\n", A, B, sumfrom(A, B));

            break;
        case 3:
            printf("\n\t\"Enter 10 number you want to find the largest of\"\n");
            printf("\t--------------------------------------------------\n");

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
                    printf("Enter the value of %dth number: ", i + 1);
                }
                scanf("%d", &Arr[i]);
                getchar();
            }

            printf("\nThe largest Number is %d\n", largest(10, Arr));
            break;
        case 4:
            printf("\n\t Enter the 10 number you want to find the average of\n");
            printf("\t-----------------------------------------------------\n\n");
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
                    printf("Enter the value of %dth number: ", i + 1);
                }

                scanf("%d", &Arr[i]);
                getchar();
            }

            printf("\nThe Avarage is: %.2lf\n", average(10, Arr));
            break;

        default:
            break;
        }

        // For break or continue the loop.
        printf("\nEnter \"m/M\" to go back to main Manu or Enter \"q/Q\" to Exit.\n");
        printf("===> ");

        scanf("%c", &control);
        getchar();
        if (control == 'M' || control == 'm')
        {
            continue;
        }
        else if (control == 'q' || control == 'Q')
        {
            break;
        }

        else
        {
            break;
        }
    }

    return 0;
}