#include <stdio.h>

int som_tot(int grens)
{
    int som = 0;

    for (int getal = 1; getal <= grens; getal++) {
        som += getal;
    }

    return som;
}

int main(void)
{
    printf("Som tot 5: %d\n", som_tot(5));
    printf("Som tot 10: %d\n", som_tot(10));

    return 0;
}