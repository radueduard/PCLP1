#include <stdio.h>
#include <limits.h>

void panta(int x1, int y1, int x2, int y2, float *m, float *n)
{
    if(x2 == x1)
    {
        *m = INT_MAX;
    }
    else
    {
        *m = (y2 - y1) / (x2 - x1);
        *n = y1 - *m * x1;
    }
}

int main()
{
    int x1, y1, x2, y2, p1, p2;
    float m, n;
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &p1, &p2);
    panta(x1, y1, x2, y2, &m, &n);
    if (m == INT_MAX)
    {
        if(p1 == x1) printf("DA");
        else printf("NU");
    }
    else
    {
        if (p2 = m * p1 + n) printf("DA");
        else printf("NU");
    }
    return 0;
}