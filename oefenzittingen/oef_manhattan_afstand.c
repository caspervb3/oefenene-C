#include <stdio.h>

int absolute_value(int getal)
{
    if (getal < 0) {
        return -getal;
    }

    return getal;
}

int manhattan_distance(
    int x1,
    int y1,
    int x2,
    int y2
)
{
    int horizontaal = absolute_value(x2 - x1);
    int verticaal = absolute_value(y2 - y1);

    return horizontaal + verticaal;
}

int main(void)
{
    printf(
        "Afstand: %d\n",
        manhattan_distance(10, 0, 0, 10)
    );

    return 0;
}