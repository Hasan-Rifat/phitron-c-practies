/*

Problem Statement

You will be given an integer array A of size N. You need to count the number of elements that are divided by 2 and number of elements that are divided by 3. If any number is divided by both 2 and 3, then consider it only for 2.

Input Format

First line will contain N, the size of the array
Second line will contain the array A.
Constraints

1 <= N <= 10^5
0 <= A[i] <= 10^9; here 0 <= i < N
Output Format

Output the number of elements that are divided by 2 first, then print the number of elements that are divided by 3.
Sample Input 0

5
1 4 2 5 3
Sample Output 0

2 1
Sample Input 1

4
6 9 12 15
Sample Output 1

2 2
*/

#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int con1 = 0;
    int con2 = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            con1++;
        }

        else if (A[i] % 3 == 0)
        {
            con2++;
        }
    }

    printf("%d %d", con1, con2);

    return 0;
}