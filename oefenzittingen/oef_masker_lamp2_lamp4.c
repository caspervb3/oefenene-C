#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint8_t masker =
        (uint8_t)((1u << 2) | (1u << 4));

    uint8_t lampen = 0;

    lampen |= masker;

    printf("Lampen: 0x%02X\n", (unsigned)lampen);

    int lamp_2_aan =
        (lampen & (1u << 2)) != 0;

    int lamp_4_aan =
        (lampen & (1u << 4)) != 0;

    printf("Lamp 2: %d\n", lamp_2_aan);
    printf("Lamp 4: %d\n", lamp_4_aan);

    return 0;
}