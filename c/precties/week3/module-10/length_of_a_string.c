#include <stdio.h>

int main()
{
    char s[101];
    scanf("%s", s); // Read a string from the user
    int length = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        length++; // Increment the length for each character until the null terminator
    }

    printf("\n");
    printf("Length of the string: %d\n", length); // Print the length of the string

    return 0;
}
