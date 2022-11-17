//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
void spirala(int a[][101], int m, int n, int v[])
{
    int i, j, k, l, nr, comp = 0;
    for (nr = 0; nr < m / 2; nr++)
    {
        for (i = nr; i < n - nr; i++)
            v[comp++] = a[i][nr];
        for (j = nr + 1; j < m - nr; j++)
            v[comp++] = a[n - nr - 1][j];
        for (k = n - nr - 1 - 1; k >= nr; k--)
            v[comp++] = a[k][m - nr - 1];
        for (l = m - nr - 1 - 1; l > nr; l--)
            v[comp++] = a[nr][l];
    }
}
int main()
{
    int a[101][101], n, m, v[101];
    scanf("%d%d", &n, &m);
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    spirala(a, m, n, v);
    for (i = 0; i < n * m; i++)
        printf("%d ", v[i]);
    return 0;
}