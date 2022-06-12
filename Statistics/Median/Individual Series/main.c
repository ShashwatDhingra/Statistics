// Median - Individual Series

#include<stdio.h>
int main()
{
    int i, j, limit, term_1, term_2, min, temp, odd = 0, even = 0;
    
    float median;

    printf("Enter the Limit of Series : ");
    scanf("%d", &limit);

    int x[limit];

    for(i=0; i<limit; i++)
    {
        j = i;

        printf("enter the %d term of Series", j+1);
        scanf("%d", &x[i]);
    }

    /* Converting the Series in Ascending Order */

    for(i=0; i<limit; i++)
    {
        for(j=i+1; j<limit; j++)
        {
            if(x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    if(limit % 2 == 0)
    {
        even = 1;
    }

    else 
    {
        odd = 1;
    }

    if(odd == 1)
    {
        term_1 = (limit+1) / 2;
        median = x[term_1-1];
    }

    else if(even == 1)
    {
        term_1 = limit/2;
        term_2 = term_1 + 1;

        median = (x[term_1 - 1] + x[term_2 - 1]) / 2;
    }

    printf("\nArranged in Ascending Order : ");
    for(i=0; i<limit; i++)
    {
        printf("%d, ", x[i]);
    }
    printf("\n\nMedian = %.2f", median);

    return 0;
}