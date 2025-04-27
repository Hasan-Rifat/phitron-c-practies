/* Problem Statement

You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.

Input Format

First line will contain T, the number of test cases.
Each test case will contain only S.
Constraints

1 <= T <= 1000
1 <= |S| <= 10000; Here |S| means the length of S.
Output Format

Output the count of capital alphabets first, then the count of small alphabets then the count of digits. Don't forget to put a new line after each test case.
Sample Input 0

2
theFox25IsBrave
ILoveYou100TimesAndSay2Also
Sample Output 0

3 10 2
7 16 4 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        char s[10001];
        scanf("%s", s);
        int capital = 0, small = 0, digit = 0;

        for (int a = 0; s[a] != '\0'; a++)
        {

            if (s[a] >= 'A' && s[a] <= 'Z')
            {
                capital++;
            }

            else if (s[a] >= 'a' && s[a] <= "z")
            {
                small++;
            }

            else if (s[a] >= '0' && s[a] <= '9')
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}