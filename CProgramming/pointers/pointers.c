#include <stdio.h>

int main()
{
    /* code */
    // lets learn about pointers
    int a = 69;
    int *ptra = &a;
    printf("The value of a is %d\n", a);
    printf("The address of a is %p\n", &ptra);
    printf("The value of a is %p\n", *ptra);
    return 0;
}
