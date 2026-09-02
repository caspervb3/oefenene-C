#include <stdio.h>

int middelste_parameter(int a, int b, int c)
{
    if ((a >= b && a <= c) ||
        (a >= c && a <= b)) {
        return a;
    }

    if ((b >= a && b <= c) ||
        (b >= c && b <= a)) {
        return b;
    }

    return c;
}

int main(void)
{
    printf("%d\n", middelste_parameter(10, 20, 15));
    printf("%d\n", middelste_parameter(3, 1, 2));
    printf("%d\n", middelste_parameter(5, 5, 8));
    printf("%d\n", middelste_parameter(-10, -5, -20));

    return 0;
}