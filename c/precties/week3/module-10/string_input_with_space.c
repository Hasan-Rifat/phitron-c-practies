#include <stdio.h>
#include <string.h>

int main()
{

    char ss[50];

    // get fn
    fgets(ss, 50, stdin);
    printf("ss = %s\n", ss);
    return 0;
}