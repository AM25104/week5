#include <stdio.h>

int main(void) {
    int max;
    int value = 1;
    int first = 1;

    printf("max?\n");
    if (scanf("%d", &max) != 1) {
        return 0;
    }

    while (value < max) {
        if (!first) {
            printf(" ");
        }
        printf("%d", value);
        first = 0;
        value *= 2;
    }
    printf("\n");

    return 0;
}

