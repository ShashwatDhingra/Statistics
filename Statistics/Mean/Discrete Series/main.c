// Mean - Discrete Series

#include<stdio.h>
int main()
{
    int limit, sum_of_f=0, sum_of_fx=0, i, j;
    float mean;

    printf("Enter the Limit of Series : ");
    scanf("%d", &limit);

    int x[limit], f[limit], fx[limit];

    

    for(i=0; i<limit; i++)
    {
        j = i;

        printf("Enter %d Value of 'x' : ", j+1);
        scanf("%d", &x[i]);
    }

    for(i=0; i<limit; i++)
    {
        j = i;
        printf("Enter %d Frequency : ", j+1);
        scanf("%d", &f[i]);
    }

    for(i=0; i<limit; i++)
    {
        fx[i] = x[i] * f[i];
    }

    for(i=0; i<limit; i++)
    {
        sum_of_f = sum_of_f + f[i];
    }

    for(i=0; i<limit; i++)
    {
        sum_of_fx = sum_of_fx + fx[i];
    }

    mean = sum_of_fx / sum_of_f;

    printf("\n\n\n\n\n\n\n");

    printf("     x    f     fx\n");
    printf("    ---- ----  ----\n");

    for(i=0; i<limit; i++)
    {
        printf("    %d  |  %d  |  %d\n", x[i], f[i], fx[i]);
    }

    printf("         ---   --- \n");

    printf("         %d  |  %d\n", sum_of_f, sum_of_fx);

    printf("\n Mean : %.2f", mean);

    return 0;
}