#include <stdio.h>
#include <stdlib.h>

struct lijst_element {
    int waarde;
    struct lijst_element *volgende;
};

struct lijst {
    struct lijst_element *eerste;
};

void voeg_vooraan_toe(
    struct lijst *lijst,
    int waarde
)
{
    if (lijst == NULL) {
        return;
    }

    struct lijst_element *nieuw =
        malloc(sizeof(*nieuw));

    if (nieuw == NULL) {
        return;
    }

    nieuw->waarde = waarde;
    nieuw->volgende = lijst->eerste;
    lijst->eerste = nieuw;
}

void toon_lijst(const struct lijst *lijst)
{
    if (lijst == NULL) {
        return;
    }

    const struct lijst_element *huidige = lijst->eerste;

    while (huidige != NULL) {
        printf("%d", huidige->waarde);

        if (huidige->volgende != NULL) {
            printf(" -> ");
        }

        huidige = huidige->volgende;
    }

    printf("\n");
}

void maak_lijst_leeg(struct lijst *lijst)
{
    if (lijst == NULL) {
        return;
    }

    struct lijst_element *huidige = lijst->eerste;

    while (huidige != NULL) {
        struct lijst_element *volgende =
            huidige->volgende;

        free(huidige);
        huidige = volgende;
    }

    lijst->eerste = NULL;
}

int main(void)
{
    struct lijst getallen = {NULL};

    voeg_vooraan_toe(&getallen, 30);
    voeg_vooraan_toe(&getallen, 20);
    voeg_vooraan_toe(&getallen, 10);

    toon_lijst(&getallen);

    maak_lijst_leeg(&getallen);

    return 0;
}