#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s); // Read a string from the user

    int sz = strlen(s);
    printf("%d", sz); // Print the length of the string

    return 0;
}
