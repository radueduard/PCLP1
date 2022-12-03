#include <stdio.h>
#include <stdlib.h>
int main() {
    int cap = 5, n, * v, k, x;
    v = (int *) malloc (cap * sizeof (int));
    scanf("%d", &x);
    n = 0;
    k = -1;
    while(x != 0)
    {
        n++;
        if(n > cap) {
            realloc(v, cap * 2 * sizeof(int));
            cap = cap * 2;
        }
        v[++k] = x;
        scanf("%d", &x);
    }

    for(int i = 0; i <= k; i++)
        printf("%d ", v[i]);

    free(v);

    return 0;
}