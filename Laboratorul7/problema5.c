#include <stdio.h>
#include <limits.h>

void panta(int x1, int y1, int x2, int y2, float* m, float* n) {
    m = (y2 - y1) / (x2 - x1);
    if (x1 == x2)
        m = INT_MAX;
    n = y1 - m * x1;
}

int main()
{
    int x1, y1, x2, y2, x3, y3, m = 0, n = 0;
    scanf("%d %d %d %d %d %d ", &x1, &y1, &x2, &y2, &x3, &y3);
    panta(x1, y1, x2, y2, m, n);
    if (y3 == m * x3 + n)
        printf("da");
    else
        printf("nu");
    return 0;
}