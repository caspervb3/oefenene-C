#include <stdint.h>
#include <stdio.h>

unsigned int tel_actieve_bits(uint8_t waarde)
{
    unsigned int aantal = 0u;

    while (waarde != 0u) {
        aantal += waarde & 1u;
        waarde >>= 1;
    }

    return aantal;
}

int main(void)
{
    uint8_t waarde = 0x2Du; /* 00101101 */

    printf("Aantal actieve bits: %u\n",
           tel_actieve_bits(waarde));

    return 0;
}
