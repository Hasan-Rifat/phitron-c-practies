#include <stdio.h>

void hello(int i)
{
    if (i == 6)
    {
        return;
    }

    hello(i + 1);
    printf("%d\n", i);
}

int main()
{
    hello(1);
    return 0;
}