#include <stdio.h>
#include <stdlib.h>

int *maak_getal(int waarde)
{
    int *nieuw_getal = malloc(sizeof(*nieuw_getal));

    if (nieuw_getal == NULL) {
        return NULL;
    }

    *nieuw_getal = waarde;

    return nieuw_getal;
}

int main(void)
{
    int *getal = maak_getal(42);

    if (getal == NULL) {
        printf("Geheugen reserveren is mislukt.\n");
        return 1;
    }

    printf("Waarde: %d\n", *getal);

    free(getal);
    getal = NULL;

    return 0;
}