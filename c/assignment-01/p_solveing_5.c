#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N > 1000)
    {
        printf("I will buy Punjabi\n");
        int update_money = N - 1000;
        if (update_money >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
/*
profile link: https://www.hackerrank.com/profile/hasanrifat
username: @hasanrifat
*/