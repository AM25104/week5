#include <stdio.h>
int main (void) {
  int x, y;
  printf("Please enter two different numbers\n");
  scanf("%d", &x);
  scanf("%d", &y);
  while (x==y) {
    printf("Same, please enter two different numbers\n");
    scanf("%d", &x);
    scanf("%d", &y);
  }
  printf("You entered %d and %d", x, y);
  return 0;
}
