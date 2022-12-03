#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, gasit;
    char(*cuvinte)[20], (*cuv)[20] = NULL;
    int *aparitii;
    scanf("%d\n", &n);
    cuvinte = malloc(n * sizeof(char[20]));
    for (i = 0; i < n; i++)
        scanf("%s", cuvinte[i]);
    int dim = 4, nr = 0, j;
    cuv = malloc(dim * sizeof(char[20]));
    aparitii = malloc(dim * sizeof(int));
    for (i = 0; i < n; i++)
    {
        gasit = 0;
        for (j = 0; j < nr; j++)
            if (strcmp(cuv[j], cuvinte[i]) == 0)
            {
                aparitii[j]++;
                gasit = 1;
            }
        if (gasit != 1)
        {
            if (nr >= dim)
            {
                dim = dim * 2;
                aparitii = realloc(aparitii, dim * sizeof(int));
                cuv = realloc(cuv, dim * sizeof(char[20]));
            }
            strcpy(cuv[nr], cuvinte[i]);
            aparitii[nr] = 1;
            nr++;
        }
    }
    for (i = 0; i < nr; i++)
        printf("%s %d\n", cuv[i], aparitii[i]);
}