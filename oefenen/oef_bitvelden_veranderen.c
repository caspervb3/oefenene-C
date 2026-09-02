#include <stdint.h>
#include <stdio.h>

unsigned stel_intensiteit_in(
    uint16_t *waarde,
    unsigned intensiteit
)
{
    if (waarde == NULL) {
        return 0;
    }

    unsigned geldig = intensiteit & 0x7Fu;

    /* Oude bits 5 tot en met 11 wissen. */
    *waarde &= (uint16_t)~(0x7Fu << 5);

    /* Nieuwe intensiteit invoegen. */
    *waarde |= (uint16_t)(geldig << 5);

    return geldig;
}

int main(void)
{
    uint16_t waarde = 0xA01F;

    printf("Voor: 0x%04X\n", (unsigned)waarde);

    unsigned opgeslagen =
        stel_intensiteit_in(&waarde, 0x33);

    printf("Opgeslagen intensiteit: 0x%X\n", opgeslagen);
    printf("Na: 0x%04X\n", (unsigned)waarde);

    return 0;
}