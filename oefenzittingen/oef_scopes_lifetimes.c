#include <stdio.h>

int is_even(int n, int *teller);
int is_odd(int n, int *teller);

int is_even(int n, int *teller)
{
    (*teller)++;

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        return 1;
    }

    return is_odd(n - 1, teller);
}

int is_odd(int n, int *teller)
{
    (*teller)++;

    if (n == 0) {
        return 0;
    }

    return is_even(n - 1, teller);
}

int main(void)
{
    int aantal_oproepen = 0;
    int getal = 21;

    printf(
        "%d is even: %d\n",
        getal,
        is_even(getal, &aantal_oproepen)
    );

    printf(
        "Aantal oproepen: %d\n",
        aantal_oproepen
    );

    return 0;
}