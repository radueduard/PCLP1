//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int prim(int n) {
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    for (int i = 2; i <= n / 2; i++) {
      if (n % i == 0)
        return 0;
    }
  return 1;
}
int main() {

  int n;
  scanf("%d", &n);
  for (int i = 0; i < n / 2; i++) {
    if (prim(i) && prim(n - i)) {
      printf("%d + %d\n", i, n - i);
    }
  }

  return 0;
}