#include <stdio.h>
#include <stdlib.h>
struct MATRICE{
    int n,m;
    int **a;
};
struct MATRICE creeaza_MATRICE(int n,int m){
    struct MATRICE x;
    int i;
    x.n=n;
    x.m=m;
    x.a=(int **)malloc(n*sizeof(int *));
    for(i=0;i<n;i++){
        x.a[i]=(int *)malloc(m*sizeof(int));
    }
    return x;
}
void citeste_MATRICE(struct MATRICE *ma){
    int i,j;
    for(i=0;i<ma->n;i++){
        for(j=0;j<ma->m;j++){
            scanf("%d",&(ma->a[i][j]));
        }
    }
}
void scrie_MATRICE(struct MATRICE *ma){
    int i,j;
    for(i=0;i<ma->n;i++){
        for(j=0;j<ma->m;j++){
            printf("%d ",ma->a[i][j]);
        }
        printf("\n");
    }
}
void adunare_MATRICE(struct MATRICE *ma,struct MATRICE *mb,struct MATRICE *mc){
    //struct MATRICE mc;
    int i,j;
    for(i=0;i<ma->n;i++){
        for(j=0;j<ma->m;j++){

            mc->a[i][j]=ma->a[i][j]+mb->a[i][j];
            }
        }
}

int main() {
	int n,m,i;
    struct MATRICE ma,mb,mc;
    scanf("%d%d",&n,&m);
    ma=creeaza_MATRICE(n,m);
    mb= creeaza_MATRICE(n,m);
    mc= creeaza_MATRICE(n,m);
    citeste_MATRICE(&ma);
    citeste_MATRICE(&mb);
    adunare_MATRICE(&ma,&mb,&mc);
    scrie_MATRICE(&ma);
    printf("\n");
    scrie_MATRICE(&mb);
    printf("\n");
    scrie_MATRICE(&mc);
    for(i=0;i<n;i++){
        free (ma.a[i]);
    }
    free(ma.a);
    for(i=0;i<n;i++){
        free (mb.a[i]);
    }
    free(mb.a);
	return 0;
}