#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint8_t waarde = UINT8_MAX;

    printf("Voor: %u\n", (unsigned)waarde);

    waarde++;

    printf("Na: %u\n", (unsigned)waarde);

    return 0;
}