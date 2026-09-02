#include <stdio.h>

int som_van_cijfers(int getal)
{
    long long positief = getal;

    if (positief < 0) {
        positief = -positief;
    }

    int som = 0;

    while (positief > 0) {
        som += (int)(positief % 10);
        positief /= 10;
    }

    return som;
}

int main(void)
{
    printf("%d\n", som_van_cijfers(1234));
    printf("%d\n", som_van_cijfers(908));
    printf("%d\n", som_van_cijfers(-52));
    printf("%d\n", som_van_cijfers(0));

    return 0;
}