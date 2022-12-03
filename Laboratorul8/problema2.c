2.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v, cap = 5, n = 0, x;
    v = (int *)malloc(cap * sizeof(int));
    scanf("%d", &x);
    while(x != 0)
    {
        if(n == cap)
        {
            cap = cap * 2;
            v = (int *)realloc(v, cap * sizeof(int));
        }
        v[n++] = x;
        scanf("%d", &x);
    }
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}
