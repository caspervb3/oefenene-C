#include <stdint.h>
#include <stdio.h>

unsigned int lees_bitveld(
    uint8_t waarde,
    unsigned int startpositie,
    unsigned int aantal)
{
    if (aantal == 0u || startpositie >= 8u ||
        startpositie + aantal > 8u) {
        return 0u;
    }

    unsigned int masker = (1u << aantal) - 1u;

    return (waarde >> startpositie) & masker;
}

int main(void)
{
    uint8_t waarde = 0xD6u; /* 11010110 */

    unsigned int resultaat = lees_bitveld(waarde, 2u, 3u);

    printf("Uitgelezen veld: %u\n", resultaat);

    return 0;
}
