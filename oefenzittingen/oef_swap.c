#include <stdio.h>

void swap(int *a, int *b)
{
    if (a == NULL || b == NULL) {
        return;
    }

    int tijdelijk = *a;
    *a = *b;
    *b = tijdelijk;
}

int main(void)
{
    int x = 10;
    int y = 20;

    swap(&x, &y);

    printf("x = %d, y = %d\n", x, y);

    return 0;
}