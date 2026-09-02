#include <stddef.h>
#include <stdio.h>

int main(void)
{
    int waarden[] = {2, 3, 5, 7, 11};

    size_t aantal =
        sizeof(waarden) / sizeof(waarden[0]);

    int som = 0;

    for (size_t i = 0; i < aantal; i++) {
        som += waarden[i];
    }

    printf("Aantal: %zu\n", aantal);
    printf("Som: %d\n", som);

    return 0;
}