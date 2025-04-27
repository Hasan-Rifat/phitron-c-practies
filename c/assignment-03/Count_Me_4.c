

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[10001];
    scanf("%s", &s);

    int freq[26] = {0};

    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {

        int inx = s[i] - 97;
        freq[inx]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i + 97, freq[i]);
        }
    }

    return 0;
}
