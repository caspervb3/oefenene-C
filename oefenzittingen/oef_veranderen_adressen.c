#include <stdio.h>

int main(void)
{
    char teken;
    char *pointer;
    long getal;

    printf("Voor:\n");
    printf("&teken = %p\n", (void *)&teken);
    printf("&pointer = %p\n", (void *)&pointer);
    printf("&getal = %p\n", (void *)&getal);

    teken = 'A';
    pointer = &teken;
    getal = 42;

    printf("Na:\n");
    printf("&teken = %p\n", (void *)&teken);
    printf("&pointer = %p\n", (void *)&pointer);
    printf("&getal = %p\n", (void *)&getal);

    return 0;
}