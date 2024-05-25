#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
        // int i = 0;
        // while (i != 10)
        // {
        //         printf("Value of i is %d\n", i);
        //         i++;
        // }

        int n;
        printf("Enter a number: ");
        scanf("%d", &n);

        for (int i = n; i > 1; i--)
        {
                printf("---->%d\n", n);
                if (n % 2 == 0)
                {
                        n = n / 2;
                }
                else
                {
                        n = 3 * n + 1;
                }
        }

        // while (n > 1)
        // {

        //         printf("---->%d\n", n);
        //         if (n % 2 == 0)
        //         {
        //                 n = n / 2;
        //         }
        //         else
        //         {
        //                 n = 3 * n + 1;
        //         }
        // }

        return 0;
}