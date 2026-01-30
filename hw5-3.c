#include <stdio.h>

int main(void) {
    int a, b;

    printf("Please enter two different numbers\n");

    if (scanf("%d %d", &a, &b) != 2) {
        return 0;
    }

    while (a == b) {
        printf("Same, please enter two different numbers\n");
        if (scanf("%d %d", &a, &b) != 2) {
            return 0;
        }
    }

    printf("You entered %d and %d\n", a, b);

    return 0;
}

