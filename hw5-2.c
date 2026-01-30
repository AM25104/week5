#include <stdio.h>

int main(void) {
    int max;
    int first = 1;

    printf("max?\n");
    if (scanf("%d", &max) != 1) {
        return 0;
    }

    for (int i = 1; i <= max; i++) {
        if (max % i == 0) {
            if (!first) {
                printf(" ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}

