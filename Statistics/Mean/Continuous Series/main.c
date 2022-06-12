// Mean - Continous Series

#include<stdio.h>
int main()
{
    int limit, i, j, sum_of_f=0, sum_of_fx=0; // Declaring Needed Int

    float mean;

    printf("Enter the Limit of Element of Series : ");  // Asking for Limit of Series
    scanf("%d", &limit);

    int c_i[2][limit], f[limit], x[limit], fx[limit];  // Declaring Needed Int

    /* Inputting the Lower Limit Series */
    for(i=0; i<limit; i++)
    {
        j = i;

        printf("Enter the %d Lower Limit : ", j+1);
        scanf("%d", &c_i[1][i]);
    }

    /* Inputting the Upper Limit Series */

    for(i=0; i<limit; i++)
    {
        j = i;
        
        printf("Enter the %d Upper Limit : ", j+1);
        scanf("%d", &c_i[2][i]);
    }

    /* Inputting the Frequency Series */

    for(i=0; i<limit; i++)
    {
        j = i;
        
        printf("Enter the %d Frequency : ", j+1);
        scanf("%d", &f[i]);
    }

    /* Making Mid-Term Series */

    for(i=0; i<limit; i++)
    {
        j = i;

        x[i] = (c_i[1][i] + c_i[2][i])/2;
    }

    /* Making fx Series */

    for(i=0; i<limit; i++)
    {
        fx[i] = x[i] * f[i];
    }

    for(i=0; i<limit; i++)
    {
        sum_of_f = sum_of_f + f[i];
        sum_of_fx = sum_of_fx + fx[i];
    }

    mean = (float)sum_of_fx / (float)sum_of_f;

    printf("\n\n\n\n\n\n\n\n\n");

    printf(" C.I   f   x   fx\n");
    for(i=0; i<limit; i++)
    {
        printf(" %d-%d | %d | %d | %d\n", c_i[1][i], c_i[2][i], f[i], x[i], fx[i]);
    }

    printf("      ---     ---\n");

    printf("       %d       %d\n\n", sum_of_f, sum_of_fx);

    printf("Mean : %.2f", mean);

    
    return 0;
}