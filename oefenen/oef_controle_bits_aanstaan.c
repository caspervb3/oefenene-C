#include <stdint.h>
#include <stdio.h>

int staan_alle_bits_aan(uint8_t waarde, uint8_t masker)
{
    return (waarde & masker) == masker;
}

int main(void)
{
    uint8_t waarde = 0x0Du; /* 00001101 */

    uint8_t masker1 = (uint8_t)((1u << 0) | (1u << 2));
    uint8_t masker2 = (uint8_t)((1u << 1) | (1u << 2));

    printf("Bits 0 en 2 aan: %d\n",
           staan_alle_bits_aan(waarde, masker1));

    printf("Bits 1 en 2 aan: %d\n",
           staan_alle_bits_aan(waarde, masker2));

    return 0;
}
