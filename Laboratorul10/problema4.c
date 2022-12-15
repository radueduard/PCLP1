//
// Created by Eduard Andrei Radu on 09.11.2022.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct MATRICE
{
    int n;
    int m;
    int **a;
}MATRICE;
MATRICE* creeaza_MATRICE(int n, int m)
{
    MATRICE *ma = (MATRICE *) malloc (sizeof(MATRICE));
    ma->n = n;
    ma->m = m;
    ma->a = (int **) malloc(n * sizeof(int *));
    for(int i = 0; i < n; i++)
        ma->a[i] = (int *) malloc(m * sizeof(int));
    return ma;
}
MATRICE* citeste_MATRICE(MATRICE* ma)
{
    for(int i = 0; i < ma->n; i++)
        for(int j = 0; j < ma->m; j++)
            scanf("%d", &ma->a[i][j]);
    return ma;
}
void scrie_MATRICE(MATRICE* ma)
{
    for(int i = 0; i < ma->n; i++)
    {
        for (int j = 0; j < ma->m; j++)
            printf("%d ", ma->a[i][j]);
        printf("\n");
    }
}
MATRICE* aduna_MATRICE(MATRICE* ma, MATRICE* mb)
{
    MATRICE *s;
    if(ma->n != mb->n || ma->m != mb->m)
        return NULL;
    s = creeaza_MATRICE(ma->n, ma->m);
    for(int i = 0; i < s->n; i++)
        for(int j = 0; j < s->m; j++)
            s->a[i][j] = ma->a[i][j] + mb->a[i][j];
    return s;
}
MATRICE* inmulteste_MATRICE(MATRICE* ma, MATRICE* mb)
{
    MATRICE *p;
    if(ma->m != mb->n)
        return NULL;
    p = creeaza_MATRICE(ma->n, mb->m);
    for(int i = 0; i < p->n; i++)
        for(int j = 0; j < p->m; j++)
        {
            p->a[i][j] = 0;
            for(int k = 0; k < ma->m; k++)
                p->a[i][j] += ma->a[i][k] * mb->a[k][j];
        }
    return p;
}
int main()
{
    MATRICE *ma, *mb, *s, *p;
    int n1, m1, n2, m2;
    scanf("%d%d", &n1, &m1);
    ma = creeaza_MATRICE(n1, m1);
    citeste_MATRICE(ma);
    scanf("%d%d", &n2, &m2);
    mb = creeaza_MATRICE(n2, m2);
    citeste_MATRICE(mb);
    s = aduna_MATRICE(ma, mb);
    p = inmulteste_MATRICE(ma, mb);
    scrie_MATRICE(s);
    scrie_MATRICE(p);
    return 0;
}
