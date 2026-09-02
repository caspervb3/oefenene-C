#include <stdio.h>

int is_even(unsigned n);
int is_odd(unsigned n);

int is_even(unsigned n)
{
    if (n == 0) {
        return 1;
    }

    return is_odd(n - 1);
}

int is_odd(unsigned n)
{
    if (n == 0) {
        return 0;
    }

    return is_even(n - 1);
}

int main(void)
{
    printf("10 is even: %d\n", is_even(10));
    printf("11 is even: %d\n", is_even(11));
    printf("11 is odd: %d\n", is_odd(11));

    return 0;
}