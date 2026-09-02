#include <stdint.h>
#include <stdio.h>

unsigned lees_vlag(uint16_t waarde)
{
    return waarde & 0x1Fu;
}

unsigned lees_sterkte(uint16_t waarde)
{
    return (waarde >> 5) & 0x7Fu;
}

unsigned lees_status(uint16_t waarde)
{
    return (waarde >> 12) & 0x0Fu;
}

int main(void)
{
    uint16_t waarde = 0xA67F;

    printf("Status: 0x%X\n", lees_status(waarde));
    printf("Sterkte: 0x%X\n", lees_sterkte(waarde));
    printf("Vlag: 0x%X\n", lees_vlag(waarde));

    return 0;
}