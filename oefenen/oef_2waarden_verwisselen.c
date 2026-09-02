#include <stddef.h>
#include <stdio.h>

void verwissel(int *a, int *b)
{
    if (a == NULL || b == NULL) {
        return;
    }

    int tijdelijk = *a;
    *a = *b;
    *b = tijdelijk;
}

int main(void)
{
    int links = 10;
    int rechts = 20;

    printf("Voor: links=%d, rechts=%d\n", links, rechts);

    verwissel(&links, &rechts);

    printf("Na: links=%d, rechts=%d\n", links, rechts);

    return 0;
}