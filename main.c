#include <stdio.h>

int main(void) {
  int i, n, k;
  int fib[47];
  fib[0] = 0;
  fib[1] = 1;
  scanf("%d", &n);
  for (i = 2; i <= 46; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
    if (n == fib[i]) {
      k = 1;
      break;
    } else {
      k = 0;
    }
  }

  if (n == 0 || n == 1) {
    k = 1;
  }

  if (k == 1) {
    printf("O número faz parte da sequência");
  } else {
    printf("O número não faz parte da sequência");
  }

  return 0;
}