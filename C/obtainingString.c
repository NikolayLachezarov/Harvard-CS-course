#include <stdio.h>

int main()
{
    printf("What is your string: ");
    char string[] = scanf("%c", &string);
    for (int i = 0; i < sizeof(string); i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}