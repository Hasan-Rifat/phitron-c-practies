#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;

    scanf("%d", &a);

    int positive = 0;
    int negative = 0;

    for (int i = 0; i < a; i++)
    {
        int n;
        scanf("%d", &n);
        if (n > 0)
        {
            positive += n;
        }
        else
        {
            negative += n;
        }
    }

    printf("%d %d", positive, negative);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
