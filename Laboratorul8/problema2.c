#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cap, n, aux, i;
    int *v = malloc(5 * sizeof(int));

    cap = 5;
    n = 0;
    scanf("%d", &aux);

    while (aux)
    {
        n++;
        if (cap == n)
        {
            v = realloc(v, 5 + cap * sizeof(int));
            cap += 5;
        }

        v[n] = aux;
        scanf("%d", &aux);
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}