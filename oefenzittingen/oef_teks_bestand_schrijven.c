#include <stdio.h>

int main(void)
{
    const char *bestandsnaam = "uitvoer.txt";

    FILE *bestand = fopen(bestandsnaam, "w");

    if (bestand == NULL)
    {
        fprintf(
            stderr,
            "%s kon niet geopend worden.\n",
            bestandsnaam
        );

        return 1;
    }

    fprintf(bestand, "Eerste regel\n");
    fprintf(bestand, "Tweede regel\n");
    fprintf(bestand, "Getal: %d\n", 42);

    if (fclose(bestand) != 0)
    {
        fprintf(stderr, "Bestand sluiten is mislukt.\n");
        return 1;
    }

    return 0;
}