#include <stddef.h>
#include <stdio.h>

size_t tel_teken(const char *tekst, char gezocht)
{
    if (tekst == NULL) {
        return 0;
    }

    size_t aantal = 0;

    while (*tekst != '\0') {
        if (*tekst == gezocht) {
            aantal++;
        }

        tekst++;
    }

    return aantal;
}

int main(void)
{
    printf("Aantal a's: %zu\n", tel_teken("bananas", 'a'));
    printf("Aantal x'en: %zu\n", tel_teken("voorbeeld", 'x'));

    return 0;
}