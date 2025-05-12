#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char S[])
{
    int length = strlen(S);

    for (int i = 0; i < length / 2; i++)
    {
        if (S[i] != S[length - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char S[1001];
    scanf("%s", S);

    if (is_palindrome(S))
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
