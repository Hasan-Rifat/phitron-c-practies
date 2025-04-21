#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int A, B;
    scanf("%lld %lld", &A, &B);
    long long int sum = A * B;
    printf("%lld", sum);
    return 0;
}
