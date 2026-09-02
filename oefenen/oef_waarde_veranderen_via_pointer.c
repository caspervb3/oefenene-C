#include <stddef.h>
#include <stdio.h>

void zet_op_nul(int *getal)
{
    if (getal == NULL) {
        return;
    }

    *getal = 0;
}

int main(void)
{
    int waarde = 42;

    printf("Voor: %d\n", waarde);

    zet_op_nul(&waarde);

    printf("Na: %d\n", waarde);

    return 0;
}