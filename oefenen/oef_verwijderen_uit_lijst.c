#include <stdio.h>
#include <stdlib.h>

struct lijst_element {
    int waarde;
    struct lijst_element *volgende;
};

struct lijst {
    struct lijst_element *eerste;
};

void voeg_achteraan_toe(
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
    nieuw->volgende = NULL;

    if (lijst->eerste == NULL) {
        lijst->eerste = nieuw;
        return;
    }

    struct lijst_element *huidige = lijst->eerste;

    while (huidige->volgende != NULL) {
        huidige = huidige->volgende;
    }

    huidige->volgende = nieuw;
}

void verwijder_op_positie(
    struct lijst *lijst,
    unsigned positie
)
{
    if (lijst == NULL || lijst->eerste == NULL) {
        return;
    }

    if (positie == 0) {
        struct lijst_element *te_verwijderen =
            lijst->eerste;

        lijst->eerste = te_verwijderen->volgende;
        free(te_verwijderen);
        return;
    }

    struct lijst_element *vorige = lijst->eerste;

    for (unsigned huidige_positie = 1;
         huidige_positie < positie &&
         vorige->volgende != NULL;
         huidige_positie++) {
        vorige = vorige->volgende;
    }

    if (vorige->volgende == NULL) {
        return;
    }

    struct lijst_element *te_verwijderen =
        vorige->volgende;

    vorige->volgende = te_verwijderen->volgende;
    free(te_verwijderen);
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

    voeg_achteraan_toe(&getallen, 10);
    voeg_achteraan_toe(&getallen, 20);
    voeg_achteraan_toe(&getallen, 30);
    voeg_achteraan_toe(&getallen, 40);

    printf("Voor: ");
    toon_lijst(&getallen);

    verwijder_op_positie(&getallen, 1);

    printf("Na verwijderen positie 1: ");
    toon_lijst(&getallen);

    verwijder_op_positie(&getallen, 0);

    printf("Na verwijderen positie 0: ");
    toon_lijst(&getallen);

    maak_lijst_leeg(&getallen);

    return 0;
}