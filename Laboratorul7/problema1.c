#include <stdio.h>

void swap(int* pa, int* pb)
{
    int x;
    x = *pa;
    *pa = *pb;
    *pb = x;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
