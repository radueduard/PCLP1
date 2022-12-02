#include <stdio.h>

void count(int n, int* v, int* zero, int* poz, int* neg)
{
    int x, y, z;
    x = y = z = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
            x++;
        else if (v[i] < 0)
            y++;
        else
            z++;
    }
    *zero = z;
    *poz = x;
    *neg = y;
}
int main() {
    int n, v[100], poz, neg, zero;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    count(n, v, &zero, &poz, &neg);
    printf("nule: %d\npozitive: %d\nnegative: %d\n", zero, poz, neg);
    return 0;
}
