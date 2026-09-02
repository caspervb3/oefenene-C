#include <stdio.h>

int grootste_van_drie(int a, int b, int c)
{
    int grootste = a;

    if (b > grootste) {
        grootste = b;
    }

    if (c > grootste) {
        grootste = c;
    }

    return grootste;
}

int main(void)
{
    printf("%d\n", grootste_van_drie(4, 9, 6));
    printf("%d\n", grootste_van_drie(-5, -2, -8));
    printf("%d\n", grootste_van_drie(7, 7, 3));

    return 0;
}