#include <stdio.h>

int main () {
    // input variables
    int n,x, event=0, odd=0, positive=0, negative=0;

    scanf("%d", &n);


    for (int i = 1; i <= n; i++)
    {

        scanf("%d", &x);
        if(x % 2 == 0)
        {
            event++;
            if(x > 0)
            {
                positive++;
            }
            else if(x < 0)
            {
                negative++;
            }
            
        } 
        else
        {
            odd++;
            if(x > 0)
            {
                positive++;
            }
            else if(x < 0)
            {
                negative++;
            }
        }

        
    }

    printf("Even: %d\n", event);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);  

    return 0;
}