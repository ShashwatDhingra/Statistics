// ALL_IN_ONE_MEAN_MEDIAN_MODE
// This is a program in which Mean, median, Mode are all Integrated in one.

#include <stdio.h>

/*Finctions for Mean*/

int mean();       // Function Prototype
int mean_indi();  // Function Prototype
int mean_disc();  // Function Prototype
int mean_conti(); // Function Prototype

/*Functions for Median*/

int median();       // Function Prototype
int median_indi();  // Function Prototype
int median_disc();  // Function Prototype
int median_conti(); // Function Prototype

/*Functions for Mode*/

int mode();
int mode_indi();
int mode_disc();
int mode_conti();

int main()
{
    int op, i, j, res;

    printf("***************************************\n");
    printf("Welcome to Statistics Program!\n\n");

main_menu:
    printf("Input 1 for Taking out Mean.\n");
    printf("Input 2 for Taking out Median.\n");
    printf("Input 3 for Taking out Mode.\n");

    printf("Input : ");
    scanf("%d", &op);

    switch (op)
    {
    case (1):
    {
        printf("\n");

        res = mean();

        if (res == 0)
        {
            printf("\nThanks For Using!");

            return (0);
        }

        else if (res == 2)
        {
            goto main_menu;
        }
    }
    break;

    case (2):
    {
        printf("\n");

        res = median();

        if (res == 0)
        {
            printf("\nThanks For Using!");

            return (0);
        }

        else if (res == 2)
        {
            goto main_menu;
        }
    }
    break;

    case (3):
    {
        printf("\n");

        res = mode();

        if (res == 0)
        {
            printf("\nThanks For Using!");

            return (0);
        }

        else if (res == 2)
        {
            goto main_menu;
        }
    }
    break;

    default:
    {
        printf("\nPlease choose Correct Option Number!\n");
        goto main_menu;
    }
    break;
    }

    printf("Thanks For Using!");

    return 0;
}

int mean()  // Function Call

{
    int op, res, op_1;

menu:
    printf("Input 1 to Work with Individual Series.\n");
    printf("Input 2 to Work with Discrete Series.\n");
    printf("Input 3 to Work with Continuous Series.\n");

    printf("Input : ");
    scanf("%d", &op);

    switch (op)
    {
    case (1):
    {
        res = mean_indi();
    }
    break;

    case (2):
    {
        res = mean_disc();
    }
    break;

    case (3):
    {
        res = mean_conti();
    }
    break;

    default:
    {
        printf("Enter Correct Option Number.\n");
        goto menu;
    }
    break;
    }

again:
    printf("\n\n-----------------------------------------\n");
    printf("Input 1 for Previous menu.\n");
    printf("Input 2 for Main menu.\n");
    printf("Input 0 for EXIT the Program.\n");

    printf("Input : ");
    scanf("%d", &op_1);

    if (op_1 == 1)
    {
        printf("\n");

        goto menu;
    }

    else if (op_1 == 2)
    {
        printf("\n");
        return (2);
    }

    else if (op_1 == 0)
    {
        return (0);
    }

    else
    {
        printf("\nPlease Choose Correct Option Number!\n");
        goto again;
    }
}

int mean_indi()  // Function Call
{
    int limit, sum_of_x = 0, i, j;
    float mean;

    printf("Enter the Limit of Series : ");
    scanf("%d", &limit);

    int x[limit];

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Enter %dth Value of 'x' : ", j + 1);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < limit; i++)
    {
        sum_of_x = sum_of_x + x[i];
    }

    mean = (float)sum_of_x / (float)limit;

    printf("\n\n\n\n\n\n\n");

    printf("    x\n");
    printf("  -----\n");

    for (i = 0; i < limit; i++)
    {
        printf("    %d\n", x[i]);
    }

    printf("  -----\n");
    printf("   %d                    No Of Terms : %d\n", sum_of_x, limit);
    printf("  -----\n\n");
    printf("Mean(X) = %.2f", mean);

    return 0;
}

int mean_disc()  // Function Call
{
    int limit, sum_of_f = 0, sum_of_fx = 0, i, j;
    float mean;

    printf("Enter the Limit of Series : ");
    scanf("%d", &limit);

    int x[limit], f[limit], fx[limit];

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Enter %d Value of 'x' : ", j + 1);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < limit; i++)
    {
        j = i;
        printf("Enter %d Frequency : ", j + 1);
        scanf("%d", &f[i]);
    }

    for (i = 0; i < limit; i++)
    {
        fx[i] = x[i] * f[i];
    }

    for (i = 0; i < limit; i++)
    {
        sum_of_f = sum_of_f + f[i];
    }

    for (i = 0; i < limit; i++)
    {
        sum_of_fx = sum_of_fx + fx[i];
    }

    mean = (float)sum_of_fx / (float)sum_of_f;

    printf("\n\n\n\n\n\n\n");

    printf("     x    f     fx\n");
    printf("    ---- ----  ----\n");

    for (i = 0; i < limit; i++)
    {
        printf("    %d  |  %d  |  %d\n", x[i], f[i], fx[i]);
    }

    printf("         ---   --- \n");

    printf("         %d  |  %d\n", sum_of_f, sum_of_fx);

    printf("\n Mean : %.2f", mean);

    return 0;
}

int mean_conti()  // Function Call
{
    int limit, i, j, sum_of_f = 0, sum_of_fx = 0; // Declaring Needed Int

    float mean;

    printf("Enter the Limit of Element of Series : "); // Asking for Limit of Series
    scanf("%d", &limit);

    int c_i[2][limit], f[limit], x[limit], fx[limit]; // Declaring Needed Int

    /* Inputting the Lower Limit Series */
    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Enter the %d Lower Limit : ", j + 1);
        scanf("%d", &c_i[1][i]);
    }

    /* Inputting the Upper Limit Series */

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Enter the %d Upper Limit : ", j + 1);
        scanf("%d", &c_i[2][i]);
    }

    /* Inputting the Frequency Series */

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Enter the %d Frequency : ", j + 1);
        scanf("%d", &f[i]);
    }

    /* Making Mid-Term Series */

    for (i = 0; i < limit; i++)
    {
        j = i;

        x[i] = (c_i[1][i] + c_i[2][i]) / 2;
    }

    /* Making fx Series */

    for (i = 0; i < limit; i++)
    {
        fx[i] = x[i] * f[i];
    }

    for (i = 0; i < limit; i++)
    {
        sum_of_f = sum_of_f + f[i];
        sum_of_fx = sum_of_fx + fx[i];
    }

    mean = (float)sum_of_fx / (float)sum_of_f;

    printf("\n\n\n\n\n\n\n\n\n");

    printf(" C.I   f   x   fx\n");
    for (i = 0; i < limit; i++)
    {
        printf(" %d-%d | %d | %d | %d\n", c_i[1][i], c_i[2][i], f[i], x[i], fx[i]);
    }

    printf("      ---     ---\n", sum_of_f, sum_of_fx);

    printf("       %d       %d\n\n", sum_of_f, sum_of_fx);

    printf("Mean : %.2f", mean);

    return 0;
}

int median()  // Function Call
{
    int op, res, op_1;

menu:
    printf("Input 1 to Work with Individual Series.\n");
    printf("Input 2 to Work with Discrete Series.\n");
    printf("Input 3 to Work with Continuous Series.\n");

    printf("Input : ");
    scanf("%d", &op);

    switch (op)
    {
    case (1):
    {
        res = median_indi();
    }
    break;

    case (2):
    {
        res = median_disc();
    }
    break;

    case (3):
    {
        res = median_conti();
    }
    break;

    default:
    {
        printf("\nEnter Correct Option Number.\n");
        goto menu;
    }
    break;
    }

    printf("\n\n-----------------------------------------\n");

again:
    printf("Input 1 for Previous menu.\n");
    printf("Input 2 for Main menu.\n");
    printf("Input 0 for EXIT the Program.\n");

    printf("Input : ");
    scanf("%d", &op_1);

    if (op_1 == 1)
    {
        printf("\n");

        goto menu;
    }

    else if (op_1 == 2)
    {
        printf("\n");
        return (2);
    }

    else if (op_1 == 0)
    {
        return (0);
    }

    else
    {
        printf("\nPlease Choose Correct Option Number!\n");
        goto again;
    }
}

int median_indi()  // Function Call
{
    int i, j, limit, term_1, term_2, min, temp, odd = 0, even = 0;

    float median;

    printf("Enter the Limit of Series : ");
    scanf("%d", &limit);

    int x[limit];

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("enter the %d term of Series", j + 1);
        scanf("%d", &x[i]);
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
            }
        }
    }

    if (limit % 2 == 0)
    {
        even = 1;
    }

    else
    {
        odd = 1;
    }

    if (odd == 1)
    {
        term_1 = (limit + 1) / 2;
        median = x[term_1 - 1];
    }

    else if (even == 1)
    {
        term_1 = limit / 2;
        term_2 = term_1 + 1;

        median = (x[term_1 - 1] + x[term_2 - 1]) / 2;
    }

    printf("\nArranged in Ascending Order : ");
    for (i = 0; i < limit; i++)
    {
        printf("%d, ", x[i]);
    }
    printf("\n\nMedian = %.2f", median);

    return 0;
}

int median_disc()  // Function Call
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

int median_conti()  // Function Call
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

    printf("C.I       f   cf\n");

    for (i = 0; i < limit; i++)
    {
        printf("%.1f-%.1f   %d   %d", c_i[1][i], c_i[2][i], f[i], cf[i]);

        if (f[i] == freq)
        {
            printf("<--");
        }

        printf("\n");
    }

    printf("         ----     \n");
    printf("          %d     \n\n", sum_of_f);

    printf("N = %d   N/2 = %d   \n", sum_of_f, sum_of_f / 2);
    printf("l = %.1f   h = %d   f = %d   cf = %d\n\n", l, h, freq, cumu_freq);
    printf("Median = %.2f", median);

    return 0;
}

int mode()   // Function Call
{
    int op, res, op_1;

menu:
    printf("Input 1 to Work with Individual Series.\n");
    printf("Input 2 to Work with Discrete Series.\n");
    printf("Input 3 to Work with Continuous Series.\n");

    printf("Input : ");
    scanf("%d", &op);

    switch (op)
    {
    case (1):
    {
        res = mode_indi();
    }
    break;

    case (2):
    {
        res = mode_disc();
    }
    break;

    case (3):
    {
        res = mode_conti();
    }
    break;

    default:
    {
        printf("\nEnter Correct Option Number.\n");
        goto menu;
    }
    break;
    }

    printf("\n\n-----------------------------------------\n");

again:
    printf("Input 1 for Previous menu.\n");
    printf("Input 2 for Main menu.\n");
    printf("Input 0 for EXIT the Program.\n");

    printf("Input : ");
    scanf("%d", &op_1);

    if (op_1 == 1)
    {
        printf("\n");

        goto menu;
    }

    else if (op_1 == 2)
    {
        printf("\n");
        return (2);
    }

    else if (op_1 == 0)
    {
        return (0);
    }

    else
    {
        printf("\nPlease Choose Correct Option Number!\n");
        goto again;
    }
}

int mode_indi()  // Function Call
{
    int mode, i, j, limit, count = 0, maxcount = 0, maxelement;

    printf("Enter the Limit of Series : ");
    scanf("%d", &limit);

    int x[limit];

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Enter the %d term of Series : ", j + 1);
        scanf("%d", &x[i]);
    }

    /* Checking for Most Frequency Term */

    for (i = 0; i < limit; i++)
    {
        for (j = i + 1; j < limit; j++)
        {
            if (x[j] == x[i])
            {
                count++;
                if (count > maxcount)
                {
                    maxelement = x[j];
                    maxcount = count;
                }
            }
        }
    }

    printf("\nSeries : ");
    for (i = 0; i < limit; i++)
    {
        printf("%d, ", x[i]);
    }

    printf("\n\nMode = %d", maxelement);

    return 0;
}

int mode_disc()  // Function Call
{
    int i, j, limit, max_f, max_x = 0, mode = 0;

    printf("Enter the Limit : ");
    scanf("%d", &limit);

    int x[limit], f[limit];

    /* Inputting the x */

    for (i = 0; i < limit; i++)
    {
        j = i;
        printf("Input the %d Term of Series : ", j + 1);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < limit; i++)
    {
        j = i;
        printf("Input the %d Frequency : ", j + 1);
        scanf("%d", &f[i]);
    }

    max_f = f[0];

    for (i = 1; i < limit; i++)
    {
        if (f[i] > max_f)
        {
            max_f = f[i];
            max_x = x[i];
        }
    }

    mode = max_x;

    /* Printing x and f*/

    printf("x   f\n\n");

    for (i = 0; i < limit; i++)
    {
        printf("%d   %d", x[i], f[i]);
        if (f[i] == max_f)
        {
            printf(" <--");
        }

        printf("\n");
    }

    printf("\nMode = %d", mode);

    return 0;
}

int mode_conti()  // Function Call
{
    int i, j, limit, max, f_m, f_1, f_2, h;

    float mode, l;

    printf("Input the Limit of Series : ");
    scanf("%d", &limit);

    float c_i[2][limit];
    int f[limit];

    /*Input the Lower Limit*/

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Enter the %d Lower Limit : ", j + 1);
        scanf("%f", &c_i[1][i]);
    }

    /*Input the Upper Limit*/

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Enter the %d Upper Limit : ", j + 1);
        scanf("%f", &c_i[2][i]);
    }

    for (i = 0; i < limit; i++)
    {
        j = i;

        printf("Enter the %d Frequency : ", j + 1);
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

    for (i = 0; i < limit; i++)
    {
        if (f[i] > max)
        {
            max = f[i];
        }
    }

    for (i = 0; i < limit; i++)
    {
        if (f[i] == max)
        {
            f_m = f[i];
            f_1 = f[i - 1];
            f_2 = f[i + 1];
            h = c_i[2][i] - c_i[1][i];
            l = c_i[1][i];

            break;
        }
    }

    mode = (float)l + (float)(h * ((f_m - f_1) / (float)(2 * f_m - f_1 - f_2))); // 5 + (2.5)

    printf("\nC.I   f\n");

    for (i = 0; i < limit; i++)
    {
        printf("%.1f-%.1f   %d", c_i[1][i], c_i[2][i], f[i]);

        if (f[i] == max)
        {
            printf("<--");
        }

        printf("\n");
    }

    printf("\n");

    printf("l = %.1f   h = %d   f_m = %d   f_1 = %d   f_2 = %d\n", l, h, f_m, f_1, f_2);

    printf("Mode = %.2f", mode);

    return 0;
}