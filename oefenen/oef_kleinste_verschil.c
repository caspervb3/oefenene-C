#include <stdio.h>

int kleinste_verschil(int a, int b, int c)
{
    int verschil_ab = a - b;
    int verschil_ac = a - c;
    int verschil_bc = b - c;

    if (verschil_ab < 0) {
        verschil_ab = -verschil_ab;
    }

    if (verschil_ac < 0) {
        verschil_ac = -verschil_ac;
    }

    if (verschil_bc < 0) {
        verschil_bc = -verschil_bc;
    }

    int kleinste = verschil_ab;

    if (verschil_ac < kleinste) {
        kleinste = verschil_ac;
    }

    if (verschil_bc < kleinste) {
        kleinste = verschil_bc;
    }

    return kleinste;
}

int main(void)
{
    printf("%d\n", kleinste_verschil(10, 20, 15));
    printf("%d\n", kleinste_verschil(-10, -20, -15));
    printf("%d\n", kleinste_verschil(7, 7, 10));

    return 0;
}