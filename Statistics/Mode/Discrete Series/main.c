// Mode - Discrete Series

#include<stdio.h>
int main()
{
    int i, j, limit, max_f, max_x=0, mode=0;

    printf("Enter the Limit : ");
    scanf("%d", &limit);

    int x[limit], f[limit];

    /* Inputting the x */

    for(i=0; i<limit; i++)
    {
        j=i;
        printf("Input the %d Term of Series : ", j+1);
        scanf("%d", &x[i]);
    }

    for(i=0; i<limit; i++)
    {
        j=i;
        printf("Input the %d Frequency : ", j+1);
        scanf("%d", &f[i]);
    }

    max_f = f[0];

    for(i=1; i<limit; i++)
    {   
        if(f[i] > max_f)
        {
            max_f = f[i];
            max_x = x[i];
        }
    }

    mode = max_x;

    /* Printing x and f*/
    
    printf("x   f\n\n");

    for(i=0; i<limit; i++)
    {
        printf("%d   %d", x[i], f[i]);
        if(f[i] == max_f)
        {
            printf(" <--");
        }

        printf("\n");
    }

    printf("\nMode = %d", mode);

    return 0;
}