#include <stdio.h>

void swap(int *pa, int *pb) {
    int aux;
    aux = *pa;
    *pa = *pb;
    *pb = aux;
}
int main() {
    int a = 2, b = 5;
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}