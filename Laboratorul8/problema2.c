#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v, n = 0, cap = 5, x, i;
    v = malloc(cap * sizeof(int));
    scanf("%d", &x);
    while (x != 0)
    {
        if (cap == n)
        {
            cap = cap * 2;
            v = realloc(v, cap * sizeof(int));
        }
        v[n++] = x;
        scanf("%d", &x);
    }
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
