#include <stdio.h>
#include <stdlib.h>
struct vector{
    int *v,cap,n;
};
void init_vector(struct vector *a,int n){
    int nr,x;
    nr=0;
    a->v = malloc(nr* sizeof(int));
    while(nr<n){
        scanf("%d",&x);
        a->v[nr]=x;
        nr++;
    }
    a->cap=n;
    a->n=n;

}
void adauga_vector(struct vector *a,int x){
    if(a->cap==a->n)
        a->v= realloc(a->v,2*a->cap* sizeof(int));
    a->v[a->n]=x;
    a->n++;
    a->cap=a->cap*2;
}
void afisare(struct vector a){
    int i;
    for(i=0;i<a.n;i++){
        printf("%d ",a.v[i]);
    }
}
int main() {
    struct vector a;
    int n,x;
    scanf("%d %d",&n,&x);
    init_vector(&a,n);
    afisare(a);
    adauga_vector(&a,x);
    printf("\n");
    afisare(a);
    return 0;
}