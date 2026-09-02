#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Aantal argumenten: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}
//gcc argumenten.c -Wall -Werror -pedantic-errors -std=c17 -o argumenten