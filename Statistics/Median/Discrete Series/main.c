// Median - Discrete Series

#include <stdio.h>
int main()
{
    int i, j, limit, term_1, term_2, min, temp, odd = 0, even = 0, sum_of_f = 0;

    float median;

    printf("Enter the Limit of Series : ");
    scanf("%d", &limit);

    int x[limit], f[limit], cf[limit];

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Enter the %d term of Series : ", j + 1);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("enter the %d Frequency : ", j + 1);
        scanf("%d", &f[i]);
    }

    /* Taking out Sum of F or N */

    for (i = 0; i < limit; i++)
    {
        sum_of_f = sum_of_f + f[i];
    }

    /* Converting the Series in Ascending Order */

    for (i = 0; i < limit; i++)
    {
        for (j = i + 1; j < limit; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;

                temp = f[i];
                f[i] = f[j];
                f[j] = temp;
            }
        }
    }

    cf[0] = f[0];

    for (i = 1; i < limit; i++)
    {
        cf[i] = f[i] + cf[i - 1];
    }

    if (sum_of_f % 2 == 0)
    {
        even = 1;
    }

    else
    {
        odd = 1;
    }

    if (odd == 1)
    {
        term_1 = (sum_of_f + 1) / 2;

        for (i = 0; i < limit; i++)
        {
            if (cf[i] >= term_1)
            {
                median = x[i];

                break;
            }
        }
    }

    else if (even == 1)
    {
        term_1 = sum_of_f / 2;
        term_2 = term_1 + 1;

        /* Checking for Value of 'th Term' */

        for (i = 0; i < limit; i++)
        {
            if (cf[i] >= term_1)
            {
                median = x[i];

                break;
            }
        }

        for (i = 0; i < limit; i++)
        {
            if (cf[i] > term_2)
            {
                median = (median + x[i]) / 2;

                break;
            }
        }
    }

    printf("%.2f is Median", median);

    return 0;
}