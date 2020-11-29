#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N, A, B;
  double random, resp;
  scanf("%d %d %d", &N, &A, &B);

  random = A + rand() % ((B-A)+1);

  resp = N/random;

  printf("%.5lf",resp);
}