#include <stdio.h>

int main()
{
    // int marks[] = {1, 2, 3, 4, 5};// also called declaring and initializing the array
    int marks[10], sum = 0;
    printf("Enter marks of 10 students:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("Marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    int average = sum / 10;
    printf("The average of 10 students is: %d", average);

    return 0;
}
