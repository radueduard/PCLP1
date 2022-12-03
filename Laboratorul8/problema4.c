#include <stdio.h>
#include <stdlib.h>

int main()
{int n, k;
    int *vi = malloc(1001 * sizeof(int));
    int *vim1 = malloc(1001 * sizeof(int));
    scanf("%d %d",&n,&k);
    for(int i = 1; i <= n + 2 ;i++)
    {
        vi[0] = 1;
        vi[i] = 1;
        for(int j = 1; j < i; j++)
            vim1[j] = vi[j-1] + vi[j];
        int *aux;
        aux = vi;
        vi = vim1;
        vim1 = aux;

    }
    printf("%d ",vim1[k]);
    return 0;
}