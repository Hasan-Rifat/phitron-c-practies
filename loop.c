#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
        int i = 0;
        while (i != 10)
        {
                printf("Value of i is %d\n", i);
                i++;
        }

        for (int j = 0; j < 10; j++)
        {
                printf("Value of j is %d\n", j);
        }

        return 0;
}