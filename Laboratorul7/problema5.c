#include <stdio.h>
#include <limits.h>

void panta(int x1, int y1, int x2, int y2, float* m, float* n)
{
    if (x1 == x2)
    {
        *m = INT_MAX;
        *n = 0;
    }
    else {
        *m = (y2 - y1) / (x2 - x1);
        *n = y1 - *m * x1;
    }

}
int main()
{
    int x1, y1, x2, y2, x3, y3;
    float m, n;
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    panta(x1, y1, x2, y2, &m, &n);
    if (y3 == (m * x3 + n))
        printf("DA\n");
    else
        printf("NU\n");
    return 0;
}
