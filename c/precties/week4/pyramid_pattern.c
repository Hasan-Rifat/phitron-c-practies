#include <stdio.h>

int main () {

    int n;

    scanf("%d", &n);
    int count = 1, space = n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int i = 1; i <= count; i++)
        {
            printf("*");
        }
        
        printf("\n");
        count+=2;
        space--;
    }
    
   
    
    return 0;
}