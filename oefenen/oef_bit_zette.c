#include <stdint.h>
#include <stdio.h>

void zet_bit(uint8_t *waarde, unsigned bitnummer)
{
    if (waarde == NULL || bitnummer > 7) {
        return;
    }

    *waarde |= (uint8_t)(1u << bitnummer);
}

void wis_bit(uint8_t *waarde, unsigned bitnummer)
{
    if (waarde == NULL || bitnummer > 7) {
        return;
    }

    *waarde &= (uint8_t)~(1u << bitnummer);
}

int controleer_bit(uint8_t waarde, unsigned bitnummer)
{
    if (bitnummer > 7) {
        return -1;
    }

    return (waarde & (uint8_t)(1u << bitnummer)) != 0;
}

int main(void)
{
    uint8_t waarde = 0;

    zet_bit(&waarde, 2);
    printf("Na bit 2 zetten: 0x%02X\n", (unsigned)waarde);

    zet_bit(&waarde, 5);
    printf("Na bit 5 zetten: 0x%02X\n", (unsigned)waarde);

    printf("Bit 2: %d\n", controleer_bit(waarde, 2));
    printf("Bit 3: %d\n", controleer_bit(waarde, 3));

    wis_bit(&waarde, 2);
    printf("Na bit 2 wissen: 0x%02X\n", (unsigned)waarde);

    return 0;
}