#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 5)
    {
        printf("Current numbner is i, %d\n", i);
        i++;
    }

    // same loop as before but just easier and more efificent
    for (int j = 0; j < 10; j++)
    {
        printf("Current numbner is j, %d\n", j);
    }

    int n = 0;
    // even if condition is false, the loop will be executed
    do
    {
        printf("%i\n", n);
        n++;
    } while (n < 6);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", j);
        }
    }

    return 0;
}