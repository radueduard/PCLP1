#include <stdio.h>
#include <string.h>

int strimgComparizen(char a[], char b[]) {
  int sizeA = strlen(a), sizeB = strlen(b);
  int size = (sizeA < sizeB ? sizeA : sizeB);
  for (int i = 0; i < size; i++) {
    if (a[i] < b[i])
      return -1;
    else if (a[i] > b[i])
      return 1;
  }

  if (sizeA == sizeB)
    return 0;
  else if (sizeA < sizeB)
    return -1;
  else
    return 1;
}

int main() {
  char a[100], b[100];

  scanf("%s", a);
  scanf("%s", b);

  printf("%d ", strimgComparizen(a, b));
  return 0;
}