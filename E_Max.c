#include <stdio.h>
#include <limits.h>

int main()
{
    int n;

    scanf("%d", &n);
    int max = INT_MIN;
    for (int i = 0; i <= n; i++)
    {
        int val;
        scanf("%d", &val);
        if (val > max)
        {
            max = val;
        }
    }

    printf("%d\n", max);

    return 0;
}
// 10, 20,30,40,50.
// 10,20, 40,50.