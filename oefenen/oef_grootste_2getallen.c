#include <stdio.h>

int grootste_van_twee(int a, int b)
{
    if (a > b) {
        return a;
    }

    return b;
}

int main(void)
{
    printf("Grootste: %d\n", grootste_van_twee(7, 12));
    printf("Grootste: %d\n", grootste_van_twee(-3, -8));

    return 0;
}