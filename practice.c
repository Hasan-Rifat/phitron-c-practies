#include <stdio.h>

int main()
{
    // task 1
    printf("Hi there /\\. %% I hope you are doing great and practicing well. \n Now this is a simple task you need to do.\n Just care for the indentation.\n Show 100%% sincerity.");
    // task 2
    int a = 10, b = 50;
    printf("%d%d", a, b);

    // task 3
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Double of %d is %d\n", num, num * 2);

    // task 4
    int num_1, num_2;
    printf("Enter a numbers: ");
    scanf("%d%d", &num_1, &num_2);
    printf("Sum of %d and %d is %d\n", num_1, num_2, num_1 + num_2);

    // task 5
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of %c = %d\n", ch, ch);

    // task 6
    int num_4;

    printf("Enter a number: ");
    scanf("%d%%", &num_4);
    printf("You entered: %d\n", num_4);
    return 0;
}
