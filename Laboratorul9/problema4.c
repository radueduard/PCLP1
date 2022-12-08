#include <stdio.h>
#include <stdlib.h>
typedef struct vector{
    int *v;
    int cap;
    int len;
}vector;

void init_vector( vector *a, int nr){
    a->v=malloc(nr*sizeof(int));
    a->cap=nr;
    a->len=0;
}

void adauga_vector( vector *a,int x){
    if(a->cap == a->len) {
        a->v = realloc(a->v,2*a->cap*sizeof(int));
        a->cap=a->cap*2;
    }
    a->v[a->len]=x;
    a->len++;
}

void afisare( vector a){
    for(int i=0;i<a.len;i++)
        printf("%d ",a.v[i]);
}

int main()
{
    struct vector a;
    int n,x;
    scanf("%d%d",&n,&x);
    init_vector(&a,n);
    afisare(a);
    adauga_vector(&a,x);
    printf("\n");
    afisare(a);
    return 0;
}