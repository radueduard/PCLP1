#include <stdio.h>

void bubble_sort(int a[], int n) {
  int temp;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

int main() {
  int n, v[10000];
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);

  bubble_sort(v, n);

  for (int i = 0; i < n; i++)
    printf("%d ", v[i]);
  return 0;
}