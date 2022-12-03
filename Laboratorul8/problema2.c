#include <stdio.h>
#include <stdlib.h>
#define CAP_INITIALA 100

int main()
{
    int *v, cap = CAP_INITIALA, n = 0, x;
    v = (int*) malloc (cap * sizeof(int));
    scanf("%d", &x);
    do {
        if(n == cap) {
            cap *= 2;
            v = (int*) realloc (v, cap * sizeof(int));
        }
        v[n++] = x;
        scanf("%d", &x);
    } while(x);
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}