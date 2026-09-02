#include <stdio.h>

int main(void)
{
    int teken;

    while ((teken = fgetc(stdin)) != EOF)
    {
        printf(
            "%c heeft ASCII-waarde %d\n",
            teken,
            teken
        );
    }

    return 0;
}