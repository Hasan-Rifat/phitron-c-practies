#include <stdio.h>

int main()
{
    char s[1000]; // Reduced size unless you really need 1,000,001
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\\' && s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }

    return 0;
}