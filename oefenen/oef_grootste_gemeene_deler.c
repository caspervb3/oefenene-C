#include <stdio.h>

unsigned grootste_gemene_deler(
    unsigned a,
    unsigned b
)
{
    while (b != 0) {
        unsigned rest = a % b;
        a = b;
        b = rest;
    }

    return a;
}

int main(void)
{
    printf("%u\n", grootste_gemene_deler(48, 18));
    printf("%u\n", grootste_gemene_deler(20, 15));
    printf("%u\n", grootste_gemene_deler(7, 3));

    return 0;
}