//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int cmmdc(int a, int b) {
  while (a != b) {
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  return a;
}
int cmmmc(int a, int b) { return (a * b) / cmmdc(a, b); }

int main() {

  int x1, x2, y1, y2;
  scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

  int numitor = cmmmc(y1, y2);

  printf("%d %d\n%d %d\n", x1 * (numitor / y1), numitor, x2 * (numitor / y2),
         numitor);

  return 0;
}