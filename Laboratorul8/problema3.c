3.
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char (*pointer_cuvinte)[20] = NULL, (*cuvinte)[20];
    int *nr_aparitii;
    scanf("%d", &n);
    cuvinte = (char (*)[20]) malloc(n * sizeof(char[20]));

    int i = 0;
    while (i < n)
    {
        scanf("%s", cuvinte[i]);
        i++;
    }

    int dim = 2, unice = 0;
    pointer_cuvinte = (char (*)[20]) malloc(dim * sizeof(char[20]));
    nr_aparitii = (int *) malloc(dim * sizeof(int));

    for (int i = 0; i < n; i++) {
        int ok = 0;
        for (int k = 0; k < unice; k++) {
            if (strcmp(pointer_cuvinte[k], cuvinte[i]) == 0) {
                nr_aparitii[k]++;
                ok = 1;
            }
        }

        if (ok != 1) {
            if (unice >= dim)
            {
                dim *= 2;
                nr_aparitii = (int *) realloc(nr_aparitii, dim * sizeof(int));
                pointer_cuvinte = (char (*)[20]) realloc(pointer_cuvinte, dim * sizeof(char[20]));
            }

            strcpy(pointer_cuvinte[unice], cuvinte[i]);
            nr_aparitii[unice] = 1;
            unice++;
        }
    }
    for (i = 0; i < unice; i++)
    {
        printf("%s %d\n", pointer_cuvinte[i], nr_aparitii[i]);
    }
    return 0;
}
