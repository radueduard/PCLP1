#include <stdio.h>
#include <stdlib.h>
struct vector
{
    int* v;
    int cap;
    int n;
};

void init_vector(struct vector *a, int nr)
{
    a->v = (int *) malloc (nr * sizeof(int));
    a->cap = nr;
    a->n = 0;
}

void adauga_vector(struct vector *a, int n)
{
    if(a->n == a->cap) {
        a->v = (int *) realloc (a->v, (a->cap + 1) * sizeof(int));
        a->cap++;
        a->v[a->n] = n;
        a->n++;
    }
    else {
        a->v[a->n] = n;
        a->n ++;
    }
}

void scrie_vector(struct vector *a)
{
    for(int i = 0; i < a->n; i++)
        printf("%d ", a->v[i]);
    printf("\n");
}

int main() {
    struct vector a;
    int nr;
    scanf("%d", &nr);
    init_vector(&a, nr);
    for(int i = 0; i < 100; i++)
    {
        adauga_vector(&a, i + 1);
        scrie_vector(&a);
    }
    return 0;
