#include <stdio.h>

int kleinste_parameter(int a, int b, int c)
{
    int kleinste = a;

    if (b < kleinste) {
        kleinste = b;
    }

    if (c < kleinste) {
        kleinste = c;
    }

    return kleinste;
}

int main(void)
{
    printf("%d\n", kleinste_parameter(10, 20, 15));
    printf("%d\n", kleinste_parameter(-3, -8, -1));
    printf("%d\n", kleinste_parameter(7, 7, 7));

    return 0;
}