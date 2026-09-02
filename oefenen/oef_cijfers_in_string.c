#include <stddef.h>
#include <stdio.h>

size_t tel_cijfers(const char *tekst)
{
    if (tekst == NULL) {
        return 0;
    }

    size_t aantal = 0;

    while (*tekst != '\0') {
        if (*tekst >= '0' && *tekst <= '9') {
            aantal++;
        }

        tekst++;
    }

    return aantal;
}

int main(void)
{
    printf("%zu\n", tel_cijfers("abc123"));
    printf("%zu\n", tel_cijfers("geen cijfers"));
    printf("%zu\n", tel_cijfers("9a8b7c6"));
    printf("%zu\n", tel_cijfers(NULL));

    return 0;
}