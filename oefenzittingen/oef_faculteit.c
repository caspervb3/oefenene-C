#include <stdio.h>

unsigned faculteit(unsigned getal)
{
    unsigned resultaat = 1;

    for (unsigned teller = 1;
         teller <= getal;
         teller++) {
        resultaat *= teller;
    }

    return resultaat;
}

int main(void)
{
    printf("0! = %u\n", faculteit(0));
    printf("5! = %u\n", faculteit(5));
    printf("6! = %u\n", faculteit(6));

    return 0;
}