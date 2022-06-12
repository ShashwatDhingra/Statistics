// Median - Individual Series

#include<stdio.h>
int main()
{
    int mode, i, j, limit, count=0, maxcount=0, maxelement;

    printf("Enter the Limit of Series : ");
    scanf("%d", &limit);

    int x[limit];

    for(i=0; i<limit; i++)
    {
        j=i;

        printf("Enter the %d term of Series : ", j+1);
        scanf("%d", &x[i]);
    }

    /* Checking for Most Frequency Term */

    for(i = 0; i< limit; i++)
    {
        for(j = i+1; j < limit; j++)
        {
            if(x[j] == x[i])
            {
                count++;
                if(count > maxcount)
                {
                    maxelement = x[j];
                    maxcount = count;
                }
            }
        }
    }

    printf("\nSeries : ");
    for(i=0; i<limit; i++)
    {
        printf("%d, ", x[i]);
    }

    printf("\n\nMode = %d", maxelement);

    return 0;
}