#include <stddef.h>
#include <stdio.h>

size_t string_lengte(const char *tekst)
{
    if (tekst == NULL) {
        return 0;
    }

    size_t lengte = 0;

    while (tekst[lengte] != '\0') {
        lengte++;
    }

    return lengte;
}

int main(void)
{
    printf("Lengte: %zu\n", string_lengte("computer"));
    printf("Lengte: %zu\n", string_lengte(""));

    return 0;
}