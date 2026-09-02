#include <stddef.h>
#include <stdio.h>

size_t tel_woorden(const char *tekst)
{
    if (tekst == NULL) {
        return 0;
    }

    size_t woorden = 0;
    int in_woord = 0;

    while (*tekst != '\0') {
        if (*tekst == ' ') {
            in_woord = 0;
        } else if (!in_woord) {
            woorden++;
            in_woord = 1;
        }

        tekst++;
    }

    return woorden;
}

int main(void)
{
    printf("%zu\n", tel_woorden("Dit is een test"));
    printf("%zu\n", tel_woorden("  veel   spaties  "));
    printf("%zu\n", tel_woorden(""));
    printf("%zu\n", tel_woorden("een"));

    return 0;
}