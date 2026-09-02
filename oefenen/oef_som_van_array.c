#include <stddef.h>
#include <stdio.h>

int som_array(const int getallen[], size_t aantal)
{
    if (getallen == NULL) {
        return 0;
    }

    int som = 0;

    for (size_t index = 0; index < aantal; index++) {
        som += getallen[index];
    }

    return som;
}

int main(void)
{
    int getallen[] = {10, 20, 30, 40};

    int resultaat = som_array(getallen, 4);

    printf("Som: %d\n", resultaat);

    return 0;
}