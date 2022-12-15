#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int n;
    int m;
    int **a;
} MATRICE;

MATRICE *creaza_MATRICE(int n, int m)
{
    MATRICE *mat;
    mat = malloc(sizeof(MATRICE));
    mat->n = n;
    mat->m = m;
    mat->a = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat->a[i] = malloc(m * sizeof(int));
    return mat;
}

MATRICE *citeste_MATRICE(MATRICE *a)
{
    int i, j;
    for (i = 0; i < a->n; i++)
        for (j = 0; j < a->m; j++)
            scanf("%d", &a->a[i][j]);
    return a;
}

void scrie_MATRICE(MATRICE *a)
{
    int i, j;
    for (i = 0; i < a->n; i++)
    {
        for (j = 0; j < a->m; j++)
            printf("%d ", a->a[i][j]);
        printf("\n");
    }
    printf("\n");
}

MATRICE *aduna_MATRICE(MATRICE *a, MATRICE *b)
{
    MATRICE *s;
    int i, j;

    if (a->n != b->n || a->m != b->m)
        return 0;

    s = creaza_MATRICE(a->n, a->m);
    for (i = 0; i < a->n; i++)
        for (j = 0; j < a->m; j++)
            s->a[i][j] = a->a[i][j] + b->a[i][j];

    return s;
}

MATRICE *inmulteste_MATRICE(MATRICE *a, MATRICE *b)
{
    MATRICE *s;
    int i, j, k;

    if (a->m != b->n)
        return 0;

    s = creaza_MATRICE(a->n, b->m);
    for (i = 0; i < s->n; i++)
        for (j = 0; j < s->m; j++)
        {
            s->a[i][j] = 0;
            for (k = 0; k < a->m; k++)
                s->a[i][j] += a->a[i][k] * b->a[k][j];
        }

    return s;
}

int main()
{
    MATRICE *a, *b, *s, *p;
    int n, m;
    scanf("%d%d", &n, &m);
    a = creaza_MATRICE(n, m);
    citeste_MATRICE(a);
    scanf("%d%d", &n, &m);
    b = creaza_MATRICE(n, m);
    citeste_MATRICE(b);
    printf("\n");

    s = aduna_MATRICE(a, b);
    if (s == 0)
        printf("Nu se poate calcula suma.\n");
    else
        scrie_MATRICE(s);

    p = inmulteste_MATRICE(a, b);
    if (p == 0)
        printf("Nu se poate calcula produsul.\n");
    else
        scrie_MATRICE(p);
}