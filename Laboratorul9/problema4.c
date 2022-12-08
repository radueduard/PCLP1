#include <stdio.h>
#include <stdlib.h>

typedef struct vector{
    int *v;
    int cap;
    int n;
}vector;
void init_vector(vector *a, int nr)
{
    a->v = (int *)malloc(nr * sizeof(int));
    a->cap = nr;
    a->n = 0;
}
void adauga_vector(vector *a, int n)
{
    if(a->n == a->cap)
    {
        a->v = (int *) realloc(a->v, 2 * a->cap * sizeof(int));
        a->cap *= 2;
    }
        a->v[a->n] = n;
        a->n++;
}
void scrie_vector(vector a)
{
    for(int i = 0; i < a.n; i++)
        printf("%d ", a.v[i]);
    printf("\n");
}
int main()
{
    vector a;
    init_vector(&a, 10);
    for(int i = 0; i <= 100; i++)
    {
        adauga_vector(&a, i);
    }
    scrie_vector(a);
    return 0;
}