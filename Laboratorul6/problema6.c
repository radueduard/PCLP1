#include <stdio.h>

void spirala(int a[][11], int n, int m, int v[])
{
    int k = 1;
    int l1 = 1, l2 = n, c1 = 1, c2 = m;
    while (l1 < l2 || c1 < c2)
    {
        for (int i = c1; i <= l2; i++)
        {
            v[k] = a[i][c1];
            k++;
        }
        c1++;
        if (l1 > l2 && c1 > c2)
            break;
        for (int i = c1; i <= c2; i++)
        {
            v[k] = a[l2][i];
            k++;
        }
        l2--;
        if (l1 > l2 && c1 > c2)
            break;
        for (int i = l2; i >= l1; i--)
        {
            v[k] = a[c2][i];
            k++;
        }
        c2--;
        if (l1 > l2 && c1 > c2)
            break;
        for (int i = c2; i >= c1; i--)
        {
            v[k] = a[i][l1];
            k++;
        }
        l1++;
        if (l1 > l2 && c1 > c2)
            break;
    }
}

int main()
{
    int n, m, a[11][11], v[101];
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
    spirala(a, n, m, v);
    for (int i = 1; i <= m * n; i++)
        printf("%d ", v[i]);

    return 0;
}