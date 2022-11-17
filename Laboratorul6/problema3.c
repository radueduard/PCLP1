#include <stdio.h>

int sameElements(int a[], int b[], int n1, int n2, int c[]) {
  int size = 0;
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n2; j++) {
      if (a[i] == b[j]) {
        c[size] = a[i];
        size++;
        break;
      }
    }
  }
  return size;
}

int main() {
  int a[1000], b[1000], c[1000];
  int n1, n2, n3;

  scanf("%d", &n1);

  for (int i = 0; i < n1; i++)
    scanf("%d", &a[i]);

  scanf("%d", &n2);

  for (int i = 0; i < n2; i++)
    scanf("%d", &b[i]);

  n3 = sameElements(a, b, n1, n2, c);

  printf("%d\n", n3);
  for (int i = 0; i < n3; i++)
    printf("%d ", c[i]);
  return 0;
}