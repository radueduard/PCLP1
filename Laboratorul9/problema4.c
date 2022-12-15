#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* v; //adresa vector
    int cap; // dimensiunea alocata(maxima)
    int len; // dimensiunea efectiva(numar de intregi stocati)
}vector;

void init_vector(vector *a, int nr)
{
    a->v = malloc((a->len)*sizeof(int));
    a->cap = nr;
    a->len = 0;
}

void adauga_vector(vector *a, int i)
{
    if(a->cap==a->len)
    {
        a->cap*=2;
        a->v= realloc(a->v, a->cap*sizeof(int));
    }
    a->v[a->len]=i;
    (a->len)++;
}

void scrie_vector(vector a)
{
    int i;
    for(i=0; i<102; i++)
        printf("%d ", a.v[i]);
    printf("\n");
}

int main()
{
    vector a;
    int i;
    init_vector(&a,10);
    for(i=0; i<101; i++)
        adauga_vector(&a,i);
    scrie_vector(a);
}


