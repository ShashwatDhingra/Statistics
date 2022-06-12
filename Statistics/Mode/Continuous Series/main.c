// Mode - continuous Series

#include<stdio.h>
int main()
{
    int i, j, limit,max, f_m, f_1, f_2, l, h;

    float mode;

    printf("Input the Limit of Series : ");
    scanf("%d", &limit);

    float c_i[2][limit];
    int f[limit];

    /*Input the Lower Limit*/

    for(i=0; i<limit; i++)
    {
        j=i;

        printf("Enter the %d Lower Limit : ", j+1);
        scanf("%f", &c_i[1][i]);
    }

    /*Input the Upper Limit*/

    for(i=0; i<limit; i++)
    {
        j=i;
        
        printf("Enter the %d Upper Limit : ", j+1);
        scanf("%f", &c_i[2][i]);
    }

    for(i=0; i<limit; i++)
    {   
        j=i;
        
        printf("Enter the %d Frequency : ", j+1);
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

    /* Finding Greatest Frequency in Frequency Series*/

    max = f[0];

    for(i=0; i<limit; i++)
    {
        if(f[i] > max)
        {
            max = f[i];
        }
    }

    for(i=0; i<limit; i++)
    {
        if(f[i] == max)
        {
            f_m = f[i];
            f_1 = f[i-1];
            f_2 = f[i+1];
              h = c_i[2][i] - c_i[1][i];
              l = c_i[1][i];

              break;
        }
    }

    mode = (float)l + (float)(h*((f_m - f_1) / (float)(2*f_m - f_1 - f_2)));  // 5 + (2.5)

    printf("\nC.I   f\n");

    for(i=0; i<limit; i++)
    {
        printf("%.1f-%.1f   %d", c_i[1][i], c_i[2][i], f[i]);

        if(f[i] == max)
        {
            printf("<--");
        }

        printf("\n");
    }

    printf("\n");

    printf("l = %d   h = %d   f_m = %d   f_1 = %d   f_2 = %d\n", l, h, f_m, f_1, f_2);

    printf("Mode = %.2f", mode);

    return 0;
}