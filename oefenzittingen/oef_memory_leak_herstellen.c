#include <stdlib.h>

int main(void)
{
    for (int i = 0; i < 10; i++) {
        int *p = malloc(sizeof(*p));

        if (p == NULL) {
            return 1;
        }

        *p = i;

        free(p);
    }

    return 0;
}