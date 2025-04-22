#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        // insert a value in the array
        scanf("%d", &a[i]);
    }

    // change the value of the array in the index
    int index, value;

    scanf("%d", &index);
    scanf("%d", &value);

    // print the array

    for (int i = n; i >= index + 1; i--)
    {
        a[i] = a[i - 1];
    }

    a[index] = value;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
