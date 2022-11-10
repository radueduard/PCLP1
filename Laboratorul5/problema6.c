//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <math.h>
#include <stdio.h>

float dist(int x1, int y1, int x2, int y2) {
  return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
int main() {
  int n;
  double max = 0;
  scanf("%d", &n);
  int v[n][2], res[2][2];

  for (int i = 0; i < n; i++) {
    scanf("%d%d", &v[i][0], &v[i][1]);
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (dist(v[i][0], v[i][1], v[j][0], v[j][1]) > max) {
        max = dist(v[i][0], v[i][1], v[j][0], v[j][1]);
        res[0][0] = v[i][0];
        res[0][1] = v[i][1];
        res[1][0] = v[j][0];
        res[1][1] = v[j][1];
      }
    }
  }
  printf("\n%d %d\n%d %d\n%lf", res[0][0], res[0][1], res[1][0], res[1][1],
         max);

  return 0;
}