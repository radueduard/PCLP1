//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <math.h>
#include <stdio.h>

int max(int a, int b) { return (a > b ? a : b); }
int min(int a, int b) { return (a > b ? b : a); }
int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21,
                     int x22, int y22) {
  int x, y;
  x = min(x12, x22) - max(x11, x21);
  y = min(y11, y21) - max(y12, y22);

  if (x > 0 && y > 0)
    return x * y;
  else
    return 0;
}
int main() {
  int v[2][4];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &v[i][j]);
    }
  }

  printf("%d\n", arie_intersectie(v[0][0], v[0][1], v[0][2], v[0][3], v[1][0],
                                  v[1][1], v[1][2], v[1][3]));
  return 0;
}