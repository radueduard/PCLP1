#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, *v, n, cap, nr;
    n = 0;
    cap = 5;
    v = malloc(cap * sizeof(int));
    scanf("%d", &nr);
    while (nr != 0) {
        if (cap == n) {
            cap = cap * 2;
            v = realloc(v, cap * sizeof(int));
        }
        v[n++] = nr;
        scanf("%d", &nr);
    }
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    return 0;
}