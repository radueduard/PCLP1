#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vim1, *vi, *aux, n , k;
    scanf("%d%d", &n, &k);
    vim1 = (int*) malloc ((k + 1) * sizeof(int));
    vi = (int*) malloc ((k + 1) * sizeof(int));
    vim1[0] = vim1[1] = 1;
    for (int i = 2; i <= k; i++)
        vim1[i] = 0;
    for (int i = 2; i <= n; i++) {
        vi[0] = 1;
        for (int j = 1; j <=k; j++)
            vi[j] = vim1[j - 1] + vim1[j];
        aux = vim1;
        vim1 = vi;
        vi = aux;
    }
    printf("%d\n", vim1[k]);
    return 0;
}