#include <math.h>
#include <stdio.h>

void afisare(int V[], int dim) {
  for (int i = 0; i < dim; i++) {
    printf("%d ", V[i]);
  }
}
int spirala(int a[][100], int m, int n, int V[]) {
  int y = 0, x = 0, size = 0;
  while (y < m && x < n) {
    for (int i = y; i < m; ++i) {
      V[size] = a[i][x];
      size++;
    }
    x++;

    for (int i = x; i < n; i++) {
      V[size] = a[m - 1][i];
      size++;
    }
    m--;

    if (x < n) {
      for (int i = m - 1; i >= y; --i) {
        V[size] = a[i][n - 1];
        size++;
      }
      n--;
    }

    if (y < m) {
      for (int i = n - 1; i >= x; --i) {
        V[size] = a[y][i];
        size++;
      }
      y++;
    }
  }
  return size;
}

int main() {
  int b[100][100];
  int m, n;

  scanf("%d%d", &m, &n);
  int v[m * n];

  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++) {
      scanf("%d", &b[i][j]);
    }

  afisare(v, spirala(b, m, n, v));
  printf("\n");

  return 0;
}