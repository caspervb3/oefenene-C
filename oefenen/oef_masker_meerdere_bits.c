#include <stdint.h>
#include <stdio.h>

uint8_t maak_masker(unsigned int startpositie, unsigned int aantal)
{
    if (aantal == 0u || startpositie >= 8u ||
        startpositie + aantal > 8u) {
        return 0u;
    }

    unsigned int enen = (1u << aantal) - 1u;
    return (uint8_t)(enen << startpositie);
}

int main(void)
{
    uint8_t masker = maak_masker(2u, 3u);

    printf("Masker: 0x%02X\n", (unsigned int)masker);

    return 0;
}
