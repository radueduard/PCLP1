#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v, cap, n = 0, x;
    cap = 5;
    v = malloc(5 * sizeof(int));
    scanf("%d", &x);
    while (x)
    {
        n++;
        if (cap == n)
        {
            v = realloc(v, 2 * cap * sizeof(int));
            cap *= 2;
        }
        v[n] = x;
        scanf("%d", &x);
    }
    for (int i = 1; i <= n; i++)
        printf("%d ", v[i]);
    return 0;
}