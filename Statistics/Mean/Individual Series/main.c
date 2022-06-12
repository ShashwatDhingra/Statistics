// Project - 2
// Mean - Individual Series 

#include<stdio.h>
int main()
{
    int limit, sum_of_x=0, i, j;
    float mean;

    printf("Enter the Limit of Series : ");
    scanf("%d", &limit);

    int x[limit];

    for(i=0; i<limit; i++)
    {
        j = i;

        printf("Enter %dth Value of 'x' : ", j+1);
        scanf("%d", &x[i]);
    }

    for(i=0; i<limit; i++)
    {
        sum_of_x = sum_of_x + x[i];
    }

    mean = sum_of_x / limit;

    printf("\n\n\n\n\n\n\n");

    printf("    x\n");
    printf("  -----\n");

    for(i=0; i<limit; i++)
    {
        printf("    %d\n", x[i]);
    }

    printf("  -----\n");
    printf("   %d                    No Of Terms : %d\n", sum_of_x, limit);
    printf("  -----\n\n");
    printf("Mean(X) = %.2f", mean);


    return 0;
}