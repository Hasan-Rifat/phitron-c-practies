#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, temp;

    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // change by dynamic index and value and assign
    int X, Y;
    scanf("%d %d", &X, &Y);

    A[X] = Y;

    // now array reverse
    for (int i = 0; i < N / 2; i++)
    {
        temp = A[i];
        A[i] = A[N - i - 1];
        A[N - i - 1] = temp;
    }

    // reserve array
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
