#include <stdio.h>

int main () {

    int n;

    scanf("%d", &n);
    int count = n;

    for (int i = 0; i <= n; i++)
    {
      

      for (int j = 0; j <= count; j++)
      {
        printf("*");
      }
      printf("\n");

      count--;
    }
    
    return 0;
}