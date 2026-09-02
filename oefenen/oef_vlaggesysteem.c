#include <stdint.h>
#include <stdio.h>

#define WIFI            (1u << 0)
#define BLUETOOTH       (1u << 1)
#define LOCATIE         (1u << 2)
#define VLIEGTUIGMODUS  (1u << 3)

void zet_optie_aan(uint8_t *instellingen, uint8_t optie)
{
    if (instellingen == NULL) {
        return;
    }

    *instellingen |= optie;
}

void zet_optie_uit(uint8_t *instellingen, uint8_t optie)
{
    if (instellingen == NULL) {
        return;
    }

    *instellingen &= (uint8_t)~optie;
}

int staat_optie_aan(uint8_t instellingen, uint8_t optie)
{
    return (instellingen & optie) != 0u;
}

int main(void)
{
    uint8_t instellingen = 0u;

    zet_optie_aan(&instellingen, WIFI);
    zet_optie_aan(&instellingen, LOCATIE);

    printf("Instellingen: 0x%02X\n",
           (unsigned int)instellingen);

    printf("Wifi: %d\n",
           staat_optie_aan(instellingen, WIFI));

    printf("Bluetooth: %d\n",
           staat_optie_aan(instellingen, BLUETOOTH));

    zet_optie_uit(&instellingen, WIFI);

    printf("Na wifi uitzetten: 0x%02X\n",
           (unsigned int)instellingen);

    return 0;
}
