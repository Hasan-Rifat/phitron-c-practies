#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd_even()
{
    int N;

    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int even_sum = 0;
    int odd_sum = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            even_sum++;
        }
        else
        {
            odd_sum++;
        }
    }

    printf("%d %d", even_sum, odd_sum);
}

int main()
{
    odd_even();
    return 0;
}
