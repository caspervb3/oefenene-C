#include <stdio.h>

unsigned fibonacci(unsigned n)
{
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    printf("Fibonacci 10: %u\n", fibonacci(10));

    return 0;
}