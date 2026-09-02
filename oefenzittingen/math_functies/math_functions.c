#include "math_functions.h"

unsigned factorial(unsigned n)
{
    unsigned result = 1;

    for (unsigned i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

unsigned fibonacci(unsigned n)
{
    if (n < 2) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}