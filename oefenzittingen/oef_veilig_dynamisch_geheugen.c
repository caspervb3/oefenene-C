#include <stdio.h>
#include <stdlib.h>

int *maak_getal(int waarde)
{
    int *getal = malloc(sizeof(*getal));

    if (getal == NULL) {
        return NULL;
    }

    *getal = waarde;
    return getal;
}

int main(void)
{
    int *getal = maak_getal(42);

    if (getal == NULL) {
        return 1;
    }

    printf("%d\n", *getal);

    free(getal);
    getal = NULL;

    return 0;
}