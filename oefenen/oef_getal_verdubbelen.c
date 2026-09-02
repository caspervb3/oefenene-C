#include <stdio.h>

int verdubbel(int getal)
{
    return getal * 2;
}

int main(void)
{
    int resultaat = verdubbel(6);

    printf("Resultaat: %d\n", resultaat);

    return 0;
}