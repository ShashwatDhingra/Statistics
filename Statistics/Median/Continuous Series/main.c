// Median - Continuous Series

#include <stdio.h>
int main()
{
    int i, j, limit, h, freq, cumu_freq, sum_of_f = 0;
    float l;

    float median;

    printf("Enter the Limit of Series : ");
    scanf("%d", &limit);

    float c_i[2][limit];
    int f[limit], cf[limit];

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Enter %d Upper Limit of Series : ", j + 1);
        scanf("%f", &c_i[1][i]);
    }

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Input %d Lower Limit Of Series : ", j + 1);
        scanf("%f", &c_i[2][i]);
    }

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Enter %d Frequecy ", j + 1);
        scanf("%d", &f[i]);
    }

    /* Check for Exclusive Series*/

    if (!(c_i[1][1] == c_i[2][0]))
    {
        printf("You have entered an Inclusive Series!\n\n");
        printf(" C.I\n");

        for (i = 0; i < limit; i++)
        {
            printf("%.f-%.f\n", c_i[1][i], c_i[2][i]);
        }
        printf("\nBut Don't Worry. We'll convert it into Exclusive Series ;)\n\n");

        for (i = 0; i < limit; i++)
        {
            c_i[1][i] = c_i[1][i] - 0.5;
            c_i[2][i] = c_i[2][i] + 0.5;
        }
    }

    /*Loop for sum Of Frequency or N*/

    for (i = 0; i < limit; i++)
    {
        sum_of_f = sum_of_f + f[i];
    }

    /* Taking out cf from c. */

    cf[0] = f[0];

    for (i = 1; i < limit; i++)
    {
        cf[i] = f[i] + cf[i - 1];
    }

    for (i = 0; i < limit; i++)
    {
        if (cf[i] >= sum_of_f / 2)
        {
            l = c_i[1][i];
            h = c_i[2][i] - c_i[1][i];
            freq = f[i];
            cumu_freq = cf[i - 1];
            break;
        }
    }

    median = l + (((sum_of_f / 2) - cumu_freq) * h) / freq;

    printf("\nC.I       f   cf\n");

    for (i = 0; i < limit; i++)
    {
        printf("%.1f-%.1f   %d   %d", c_i[1][i], c_i[2][i], f[i], cf[i]);

        if(f[i] == freq)
        {
            printf("<--");
        }

        printf("\n");
    }

    printf("         ----     \n");
    printf("          %d     \n\n", sum_of_f);

    printf("N = %d   N/2 = %d   \n", sum_of_f, sum_of_f/2);
    printf("l = %.1f   h = %d   f = %d   cf = %d\n\n", l, h, freq, cumu_freq);
    printf("Median = %.2f", median);

    return 0;
}