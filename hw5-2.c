
#include <stdio.h>
int main (void) {
  int max;
  int i = 1;
  printf("max?\n");
  scanf ("%d", &max);
  while (i <= max){
    if (max % i == 0) {
      printf("%d ", i);
    }
    i++;
  }
  return 0;
}
