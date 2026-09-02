#include <stdint.h>
#include <stdio.h>

uint16_t voeg_bytes_samen(uint8_t hoge_byte, uint8_t lage_byte)
{
    return (uint16_t)(
        ((uint16_t)hoge_byte << 8) | lage_byte
    );
}

int main(void)
{
    uint8_t hoge_byte = 0x12u;
    uint8_t lage_byte = 0x34u;

    uint16_t resultaat =
        voeg_bytes_samen(hoge_byte, lage_byte);

    printf("Resultaat: 0x%04X\n",
           (unsigned int)resultaat);

    return 0;
}
