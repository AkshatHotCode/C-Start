#include <stdio.h>

int main()
// function that will print multiplcation table of the number entered by the user without using loop
{
    // multiplication table without using loop
    int num, i;
    printf("Enter a number:");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}