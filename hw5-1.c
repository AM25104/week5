5-1:
#include <stdio.h>
int main (void){
  int max;
  int i = 1;
  printf("max?\n");
  scanf("%d", &max);
  while (i<=max) {
    printf ("%d ", i);
    i *= 2;
  }
  return 0;
}
