/*

Problem Statement

You will be given a positive integer N, you need to print a pattern shown below using this N.

For example: If N=5, the pattern will look like below.

image

See the sample test cases for more clarification.

Input Format

Input will contain only N.
Constraints

1 <= N <= 100
Output Format

Output the pattern.
Sample Input 0

4
Sample Output 0

   #
  ---
 #####
-------
 #####
  ---
   #
Sample Input 1

1
Sample Output 1

#
Sample Input 2

7
Sample Output 2

      #
     ---
    #####
   -------
  #########
 -----------
#############
 -----------
  #########
   -------
    #####
     ---
      #


*/

/* #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
   scanf("%d", &n);


for (int i = 0; i <= n; i++)
{
    printf("%*s", n-i,"");
}


    return 0;
}
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;

    scanf("%d", &n);

    int h = 1;
    int b = n - 1;

    // for top part
    for (int i = 1; i <= n; i++)
    {

        for (int i = 0; i < b; i++)
        {
            printf(" ");
        }

        char c;

        if (i % 2 == 0)
        {
            c = '-';
        }
        else
        {
            c = '#';
        }

        for (int j = 1; j <= h; j++)
        {

            printf("%c", c);
        }

        printf("\n");
        h += 2;
        b--;
    }

    // for bottom part
    h -= 4;
    b += 2;

    for (int i = n - 1; i >= 1; i--)
    {

        for (int i = 0; i < b; i++)
        {
            printf(" ");
        }

        char c;

        if (i % 2 == 0)
        {
            c = '-';
        }
        else
        {
            c = '#';
        }

        for (int j = 1; j <= h; j++)
        {

            printf("%c", c);
        }

        printf("\n");
        h -= 2;
        b++;
    }

    return 0;
}