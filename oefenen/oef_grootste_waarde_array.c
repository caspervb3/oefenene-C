#include <stddef.h>
#include <stdio.h>

int maximum_array(const int getallen[], size_t aantal)
{
    if (getallen == NULL || aantal == 0) {
        return 0;
    }

    int grootste = getallen[0];

    for (size_t index = 1; index < aantal; index++) {
        if (getallen[index] > grootste) {
            grootste = getallen[index];
        }
    }

    return grootste;
}

int main(void)
{
    int getallen[] = {-5, 12, 3, 9, -2};

    printf("Maximum: %d\n", maximum_array(getallen, 5));

    return 0;
}