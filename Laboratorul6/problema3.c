#include <stdio.h>

int main()
{
    int n, m;
    int a[1001], b[1001], c[1001];
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &b[i]);
    int k = 1;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (a[i] == b[j])
            {
                c[k] = a[i];
                k++;
            }
    for (int i = 1; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}