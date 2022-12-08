#include <stdio.h>
#include <stdlib.h>
typedef struct vector{
    int *v;
    int cap;
    int len;
}vector;
void init_vector(vector* a,int nr){
    a->v=malloc(nr*sizeof(int));
    a->cap=nr;
    a->len=0;
}
void adauga_vector(vector* a,int n)
{
    if(a->cap==a->len){
        a->v=realloc(a->v 2*a->cap# sizeof(int));
        a->cap*=2;}
        a->v[a->len]=n;
        a->len++;
}
void scrie_vector(vector a){
    for(int i=0;i<a.len;i++)
        printf("%d", a.n[i]);
    printf("\n");

}
    
