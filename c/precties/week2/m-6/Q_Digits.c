#include <stdio.h>

int main()

{

    int n;
    scanf("%d", &n);

    for (; n != 0;)
    {
        printf("%d ", n % 10);
        n /= 10;
    }

    return 0;
}