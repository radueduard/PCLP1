//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

struct matrice{
    int n, m;
    int **a;
};

matrice* creeaza_MATRICE(int n, int m){
    matrice *matrix;
    matrix = (matrice *) malloc(sizeof(matrice));
    matrix -> n = n;
    matrix -> m = m;
    matrix -> a = (int **) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        matrix -> a[i] = (int *) malloc(m * sizeof(int));
    }
    return matrix -> a[i][j];
}

matrice* citeste_MATRICE(matrice* a){
    for(int i = 0; i < a->n; i++){
        for(int j = 0; j < a->m; j++){
            scanf("%d", &a -> a[i][j]);
        }
    }
}

void scrie_MATRICE(matrice* a){
    for(int i = 0; i < a -> n; i++){
        for(int j = 0; j < a -> m; j++){
            printf("%d", a -> a[i][j]);
        }
        printf("\n");
    }
}

matrice* aduna_MATRICE(matrice* ma, matrice* mb){
    matrice *adunare;
    if(ma -> n != mb -> n || ma -> m != mb -> m){
        return NULL;
    }
    else{
        adunare = creeaza_MATRICE(ma -> n, ma -> m);
        for(int i = 0; i < adunare -> n; i++){
            for(int j = 0; j < adunare -> m; j++){
                adunare[i][j] = ma[i][j] + mb[i][j];
            }
        }
        return adunare;
    }
}

MATRICE* inmulteste_MATRICE(MATRICE * ma, MATRICE * mb)
{
    if(ma->m != mb->n) return NULL;
    MATRICE  *mc = creeaza_MATRICE(ma->n, mb->m);
    for(int i = 0; i < mc->n; i++)
        for(int j = 0; j < mc->m; j++)
        {
            mc->a[i][j] = 0;
            int row = i;
            int col = j;
            for(int k = 0; k < ma->m; k++)
                mc->a[i][j] = mc->a[i][j] + ma->a[row][k] * mb->a[k][col];
        }
    return mc;
}

int main() {

    int n_a, m_a, n_b, m_b;
    scanf("%d%d", &n_a, &m_a);
    MATRICE *ma = creeaza_MATRICE(n_a, m_a);
    citeste_MATRICE(ma);
    scanf("%d%d", &n_b, &m_b);
    MATRICE *mb = creeaza_MATRICE(n_b, m_b);
    citeste_MATRICE(mb);

    MATRICE *md = inmulteste_MATRICE(ma, mb);
    scrie_MATRICE(md);

    return 0;
}