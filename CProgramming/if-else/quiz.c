#include <stdio.h>

int main()
{
    int subject1;
    int subject2;

    printf("For maths enter 1 and for science enter 2");
    printf("Enter first subject:");
    printf("Enter second subject:");
    scanf("%d %d", &subject1, &subject2);

    if (subject1 == 1 && subject2 == 2)
    {
        printf("You will get 45 rupees gift.");
    }
    else if (subject1 == 1 && subject2 != 2)
    {
        printf("You will get 15 rupees gift.");
    }
    else if (subject1 != 1 && subject2 == 2)
    {
        printf("You will get 15 rupees gift.");
    }
    else
    {
        printf("You will get 0 rupees gift.");
    }
}