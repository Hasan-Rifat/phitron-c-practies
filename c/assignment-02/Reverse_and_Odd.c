#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    };

    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d ", ar[i]);
        }
    }

    return 0;
}

// 3
/* #include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int i = N - 1;
    while (i >= 0)
    {
        if (i % 2 != 0)
        {
            printf("%d ", A[i]);
        }
        i--;
    }
    return 0;
} */