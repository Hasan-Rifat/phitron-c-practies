#include <stdio.h>

int main()
{

    int ar[5];

    ar[2] = 10;
    ar[3] = 20;
    ar[4] = 30;
    ar[0] = 1;
    ar[1] = 2;

    printf("%d\n", ar[2]);

    return 0;
}