#include <stdio.h>

int main(void)
{
    int som = 0;

    for (int getal = 1; getal <= 10; getal++) {
        som += getal;
    }

    printf("Som: %d\n", som);

    return 0;
}