#include <stdio.h>

#define BUFFER_SIZE 128

int main(void)
{
    FILE *bestand = fopen("uitvoer.txt", "r");

    if (bestand == NULL)
    {
        fprintf(stderr, "uitvoer.txt bestaat niet.\n");
        return 1;
    }

    char buffer[BUFFER_SIZE];

    while (fgets(buffer, BUFFER_SIZE, bestand) != NULL)
    {
        printf("%s", buffer);
    }

    if (fclose(bestand) != 0)
    {
        return 1;
    }

    return 0;
}