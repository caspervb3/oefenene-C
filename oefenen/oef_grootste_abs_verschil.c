#include <stdio.h>

int absolute_waarde(int waarde)
{
    if (waarde < 0) {
        return -waarde;
    }

    return waarde;
}

int grootste_verschil(int a, int b, int c)
{
    int verschil_ab = absolute_waarde(a - b);
    int verschil_ac = absolute_waarde(a - c);
    int verschil_bc = absolute_waarde(b - c);

    int grootste = verschil_ab;

    if (verschil_ac > grootste) {
        grootste = verschil_ac;
    }

    if (verschil_bc > grootste) {
        grootste = verschil_bc;
    }

    return grootste;
}

int main(void)
{
    printf("%d\n", grootste_verschil(10, 20, 15));
    printf("%d\n", grootste_verschil(-10, 5, 20));
    printf("%d\n", grootste_verschil(7, 7, 7));

    return 0;
}