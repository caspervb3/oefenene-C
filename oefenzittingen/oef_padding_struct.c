#include <stdio.h>

struct Example {
    char eerste;
    int getal;
    char tweede;
};

int main(void)
{
    size_t losse_velden =
        sizeof(char) + sizeof(int) + sizeof(char);

    printf("Losse velden: %zu\n", losse_velden);
    printf("Volledige struct: %zu\n", sizeof(struct Example));

    return 0;
}