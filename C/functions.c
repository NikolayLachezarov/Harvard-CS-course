#include <stdio.h>

// prototype of the function as it is bad manner of declaring the fucntion before main as it takes another person too long to find your main
void meow(int n);

int main()
{
    meow(4);

    return 0;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}