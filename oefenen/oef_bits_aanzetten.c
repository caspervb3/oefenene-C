#include <stdint.h>
#include <stdio.h>

void zet_recht(uint8_t *rechten, uint8_t bitnummer)
{
    if (rechten == NULL || bitnummer > 3) {
        return;
    }

    *rechten |= (uint8_t)(1u << bitnummer);
}

int main(void)
{
    uint8_t rechten = 0;

    zet_recht(&rechten, 0);
    printf("Na bit 0: 0x%02X\n", (unsigned)rechten);

    zet_recht(&rechten, 2);
    printf("Na bit 2: 0x%02X\n", (unsigned)rechten);

    zet_recht(&rechten, 7);
    printf("Na ongeldig bit 7: 0x%02X\n", (unsigned)rechten);

    zet_recht(NULL, 1);

    return 0;
}