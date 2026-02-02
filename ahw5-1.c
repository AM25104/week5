#include <stdio.h>

int main(void) {
    int n, m;

    printf("Enter n and m:\n");
    if (scanf("%d %d", &n, &m) != 2) {
        return 0;
    }

    if (n > m) {
        printf("Cannot transform %d to %d\n", n, m);
        return 0;
    }

    int steps = 0;
    int target = m;

    // Work backwards from m down to n
    while (target > n) {
        if (target % 2 == 1) {
            target -= 1;
        } else {
            target /= 2;
        }
        steps++;
    }

    // If target < n, we need (n - target) 
    //increments forward
    if (target < n) {
        steps += (n - target);
    }

    printf("Numbers of steps taken: %d\n", steps);

    return 0;
}

