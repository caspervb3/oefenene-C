#include <stddef.h>
#include <stdio.h>

int is_gesorteerd(
    const int waarden[],
    size_t aantal
)
{
    if (waarden == NULL) {
        return 0;
    }

    for (size_t index = 1; index < aantal; index++) {
        if (waarden[index] < waarden[index - 1]) {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int eerste[] = {1, 2, 2, 5};
    int tweede[] = {1, 4, 3, 5};

    printf("%d\n", is_gesorteerd(eerste, 4));
    printf("%d\n", is_gesorteerd(tweede, 4));

    return 0;
}