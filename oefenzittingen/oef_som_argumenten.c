#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(
            stderr,
            "Gebruik: %s getal1 getal2\n",
            argv[0]
        );

        return 1;
    }

    int eerste = atoi(argv[1]);
    int tweede = atoi(argv[2]);

    printf("%d\n", eerste + tweede);

    return 0;
}