#include <stdio.h>

unsigned faculteit(unsigned n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * faculteit(n - 1);
}

int main(void)
{
    printf("5! = %u\n", faculteit(5));

    return 0;
}