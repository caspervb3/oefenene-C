#include <stddef.h>
#include <stdio.h>

int is_klinker(char teken)
{
    return teken == 'a' ||
           teken == 'e' ||
           teken == 'i' ||
           teken == 'o' ||
           teken == 'u' ||
           teken == 'A' ||
           teken == 'E' ||
           teken == 'I' ||
           teken == 'O' ||
           teken == 'U';
}

void verwijder_klinkers(
    const char *invoer,
    char *uitvoer,
    size_t uitvoer_grootte
)
{
    if (uitvoer == NULL || uitvoer_grootte == 0) {
        return;
    }

    uitvoer[0] = '\0';

    if (invoer == NULL) {
        return;
    }

    size_t geschreven = 0;

    while (*invoer != '\0' &&
           geschreven + 1 < uitvoer_grootte) {
        if (!is_klinker(*invoer)) {
            uitvoer[geschreven] = *invoer;
            geschreven++;
        }

        invoer++;
    }

    uitvoer[geschreven] = '\0';
}

int main(void)
{
    char uitvoer[50];

    verwijder_klinkers(
        "Informatica",
        uitvoer,
        sizeof(uitvoer)
    );

    printf("\"%s\"\n", uitvoer);

    verwijder_klinkers(
        "computer",
        uitvoer,
        4
    );

    printf("\"%s\"\n", uitvoer);

    return 0;
}