#include <stdint.h>
#include <stdio.h>

int schrijf_bitveld(
    uint16_t *waarde,
    unsigned int startpositie,
    unsigned int aantal,
    unsigned int nieuwe_waarde)
{
    if (waarde == NULL || aantal == 0u ||
        startpositie >= 16u ||
        startpositie + aantal > 16u) {
        return 0;
    }

    unsigned int kleine_masker = (1u << aantal) - 1u;
    uint16_t masker =
        (uint16_t)(kleine_masker << startpositie);

    /* Oude bits wissen. */
    *waarde &= (uint16_t)~masker;

    /* Nieuwe bits invoegen. */
    *waarde |= (uint16_t)(
        (nieuwe_waarde & kleine_masker) << startpositie
    );

    return 1;
}

int main(void)
{
    uint16_t waarde = 0xA01Fu;

    printf("Voor: 0x%04X\n", (unsigned int)waarde);

    if (schrijf_bitveld(&waarde, 5u, 7u, 0x33u)) {
        printf("Na: 0x%04X\n", (unsigned int)waarde);
    } else {
        printf("Ongeldige invoer\n");
    }

    return 0;
}
