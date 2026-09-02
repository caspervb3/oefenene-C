#include <stdio.h>

struct Point {
    int x;
    int y;
};

int absolute_value(int waarde)
{
    if (waarde < 0) {
        return -waarde;
    }

    return waarde;
}

int point_distance(
    struct Point eerste,
    struct Point tweede
)
{
    int verschil_x =
        absolute_value(tweede.x - eerste.x);

    int verschil_y =
        absolute_value(tweede.y - eerste.y);

    return verschil_x + verschil_y;
}

int main(void)
{
    struct Point a = {10, 0};
    struct Point b = {0, 10};

    printf("Afstand: %d\n", point_distance(a, b));

    return 0;
}