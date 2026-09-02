#include <stdio.h>

int is_multiple(int getal, int deler)
{
    if (deler == 0) {
        return 0;
    }

    return getal % deler == 0;
}

int main(void)
{
    for (int getal = 1; getal <= 100; getal++) {
        if (is_multiple(getal, 15)) {
            printf("FizzBuzz\n");
        } else if (is_multiple(getal, 3)) {
            printf("Fizz\n");
        } else if (is_multiple(getal, 5)) {
            printf("Buzz\n");
        } else {
            printf("%d\n", getal);
        }
    }

    return 0;
}