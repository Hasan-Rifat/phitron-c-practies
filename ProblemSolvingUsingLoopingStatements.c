#include <stdio.h>

int main()
{
    int n, w, sum = 0, i; // Initialize sum to 0
    printf("Enter the number of passengers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &w);
        sum += w;
    }
    printf("Total weight: %d\n", sum);

    return 0;
}