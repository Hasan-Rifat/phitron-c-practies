#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s;
    if (n % 5 == 0)
    {
        s = n / 5;
    }
    else
    {
        s = (n / 5) + 1;
    }
    return 0;
}