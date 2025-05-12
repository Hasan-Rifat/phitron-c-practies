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

    for (int i = 1; i <= n; i++)
    {

        for (int i = 0; i < b; i++)
        {
            printf(" ");
        }

        for (int j = h; j >= 1; j--)
        {

            printf("%d", j);
        }

        printf("\n");
        h += 1;
        b--;
    }

    return 0;
}