#include <stdint.h>
#include <stdio.h>

uint8_t lees_lage_byte(uint16_t waarde)
{
    return (uint8_t)(waarde & 0xFFu);
}

uint8_t lees_hoge_byte(uint16_t waarde)
{
    return (uint8_t)((waarde >> 8) & 0xFFu);
}

int main(void)
{
    uint16_t waarde = 0xA67Fu;

    uint8_t hoge_byte = lees_hoge_byte(waarde);
    uint8_t lage_byte = lees_lage_byte(waarde);

    printf("Hoge byte: 0x%02X\n",
           (unsigned int)hoge_byte);

    printf("Lage byte: 0x%02X\n",
           (unsigned int)lage_byte);

    return 0;
}
