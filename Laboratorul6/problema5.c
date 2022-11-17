#include <stdio.h>
#include <string.h>

void transform(int v[], int n, int x) {
  int temp[n], end = n - 1, begin = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] < x) {
      temp[begin] = v[i];
      begin++;
    } else {
      temp[end] = v[i];
      end--;
    }
  }
  for (int i = 0; i < n; i++) {
    v[i] = temp[i];
  }
}

int main() {
  int n, x;

  scanf("%d%d", &n, &x);
  int v[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);

  transform(v, n, x);
  for (int i = 0; i < n; i++)
    printf("%d ", v[i]);
  return 0;
}