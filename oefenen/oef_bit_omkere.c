#include <stdint.h>
#include <stdio.h>

void keer_bit_om(uint8_t *waarde, unsigned int bitnummer)
{
    if (waarde == NULL || bitnummer > 7u) {
        return;
    }

    *waarde ^= (uint8_t)(1u << bitnummer);
}

int main(void)
{
    uint8_t waarde = 0x0Au; /* 00001010 */

    printf("Begin: 0x%02X\n", (unsigned int)waarde);

    keer_bit_om(&waarde, 0u);
    printf("Bit 0 omgekeerd: 0x%02X\n", (unsigned int)waarde);

    keer_bit_om(&waarde, 3u);
    printf("Bit 3 omgekeerd: 0x%02X\n", (unsigned int)waarde);

    return 0;
}
