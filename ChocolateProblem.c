#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int chock = n;
    int pack = n;
    printf("Enter the number of chocolates: ");

    for (int i = pack; pack >= 4; i++)
    {
        chock += (pack / 4);
        pack = (pack / 4) + (pack % 4);
    }
    printf("%d", chock);
    return 0;
}