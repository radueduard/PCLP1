#include <stdio.h>

typedef struct vector{
    int *v;
    int cap;
    int n;
}vector;

void init_vector(vector *a, int nr){
    a->cap = nr;
    a->n = 0;
    a->v = (int *) calloc(nr, sizeof(int));
}

void adauga_vector(vector *a, int n){
    if(a -> cap == a -> n) {
        a->v = (int *) realloc(a->v, a->cap * sizeof(int));
        a->cap *= 2;
    }
    a-v[a -> n]= n;
    a -> n++;
}

void scrie_vector(vector a){
    for (int i= 0; i < a->n; i++){
        printf("%d", a-v[i]);
    }
}

int main(){
        vector v;
        int i;
        init_vector(&v, 10);
        for (i = 0; i < 20; i++)
            adauga_vector(&v, i);
        scrie_vector(&v);
        return 0;
}