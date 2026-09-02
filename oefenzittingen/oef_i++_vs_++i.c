#include <stdio.h>

int main(void)
{
    printf("Met i++:\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\nMet ++i:\n");

    for (int i = 1; i <= 10; ++i) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}