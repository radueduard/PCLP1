//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
int cifra(int n, int c) {
  for (; n != 0; n /= 10) {
    if (n % 10 == c) {
      return 1;
    }
  }
  return 0;
}
int main() {
  int n, c;
  scanf("%d%d", &n, &c);

  if (cifra(n, c))
    printf("DA");
  else if (cifra(n, c))
    printf("NU");

  return 0;
}