//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
int hasZero(int n) {
  for (; n != 0; n /= 10) {
    if (n % 10 == 0)
      return 1;
  }
  return 0;
}
int transforma(int n) {
  int v[10] = {0};
  for (int i = n; i != 0; i /= 10) {
    v[i % 10]++;
  }

  if (hasZero(n)) {
    for (int i = 9; i >= 0; i--)
      if (v[i] != 0)
        for (int j = 0; j < v[i]; j++) {
          printf("%d", i);
        }
  } else
    for (int i = 0; i < 10; i++)
      if (v[i] != 0)
        for (int j = 0; j < v[i]; j++) {
          printf("%d", i);
        }
}
int main() {
  int n;
  scanf("%d", &n);
  transforma(n);

  return 0;
}