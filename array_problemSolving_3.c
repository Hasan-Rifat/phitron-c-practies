#include <stdio.h>

int main()
{
    int are[105];
    int n, i;
    int ec = 0, oc = 0;
    int ans;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &are[i]);
        if (are[i] % 2 == 0)
            ec++;
        else
            oc++;
    }
    if (ec == 1)
    {
        for (i = 0; i < n; i++)
        {
            if (are[i] % 2 == 0)
            {
                ans = i;
            }
        }
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (are[i] % 2 != 0)
            {
                ans = i;
            }
        }
    }
    printf("Even count = %d\n", ans);
    return 0;
}