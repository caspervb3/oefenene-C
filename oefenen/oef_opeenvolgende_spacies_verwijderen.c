#include <stddef.h>
#include <stdio.h>

void druk_spaties_samen(
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
    int vorige_was_spatie = 0;

    while (*invoer != '\0' &&
           geschreven + 1 < uitvoer_grootte) {
        int huidige_is_spatie = (*invoer == ' ');

        if (!huidige_is_spatie || !vorige_was_spatie) {
            uitvoer[geschreven] = *invoer;
            geschreven++;
            vorige_was_spatie = huidige_is_spatie;
        }

        invoer++;
    }

    uitvoer[geschreven] = '\0';
}

int main(void)
{
    char uitvoer[50];

    druk_spaties_samen(
        "Dit  is   een test",
        uitvoer,
        sizeof(uitvoer)
    );

    printf("\"%s\"\n", uitvoer);

    druk_spaties_samen(
        "  Voorbeeld   ",
        uitvoer,
        sizeof(uitvoer)
    );

    printf("\"%s\"\n", uitvoer);

    return 0;
}