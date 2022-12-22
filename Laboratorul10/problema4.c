//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct MATRICE {
    int n, m;
    int **a;
}MATRICE;

MATRICE* creeaza_MATRICE(int n, int m){
    MATRICE *matrice = malloc(sizeof(MATRICE));
    matrice->n = n;
    matrice->m = m;
    matrice->a = malloc(n * sizeof(int*));
    for (int i = 0; i < m; ++i) {
        matrice->a[i] = malloc(m * sizeof(int));
    }
    return matrice;
}

MATRICE* citeste_MATRICE(MATRICE* ma){
    for (int i = 0; i < ma->n; ++i) {
        for (int j = 0; j < ma->m; ++j)
            scanf("%d", &ma->a[i][j]);
    }
    return ma;
}

void scrie_MATRICE(MATRICE* ma){
    for (int i = 0; i < ma->n; ++i) {
        for (int j = 0; j < ma->m; ++j)
            printf("%d ", ma->a[i][j]);
        printf("\n");
    }
}

MATRICE* aduna_MATRICE(MATRICE* ma, MATRICE* mb){
    if (ma->n != mb->n || ma->m != mb->m)
        return NULL;
    else {
        MATRICE *mc = creeaza_MATRICE(ma->n, ma->m);
        for (int i = 0; i < mc->n; ++i) {
            for (int j = 0; j < mc->m; ++j) {
                mc->a[i][j] = ma->a[i][j] + mb->a[i][j];
            }
        }
        return mc;
    }
}

MATRICE* inmulteste_MATRICE(MATRICE* ma, MATRICE* mb){
    if (ma->m != mb->n)
        return NULL;
    else {
        MATRICE *mc = creeaza_MATRICE(ma->n, mb->m);
        for (int i = 0; i < mc->n; ++i) {
            for (int j = 0; j < mc->m; ++j) {
                mc->a[i][j] = 0;
                for (int k = 0; k < ma->m; ++k) {
                    mc->a[i][j] += ma->a[i][k] * mb->a[k][j];
                }
            }
        }
        return mc;
    }
}

int main() {
    int n+,m;
    scanf("%d%d", &n, &m);
    MATRICE* mat1 = creeaza_MATRICE(n, m);
    MATRICE* mat2 = creeaza_MATRICE(n, m);
    MATRICE* mat3;
    MATRICE* mat4;
    citeste_MATRICE(mat1);
    scrie_MATRICE(mat1);
    citeste_MATRICE(mat2);
    scrie_MATRICE(mat2);
    mat3 = aduna_MATRICE(mat1, mat2);
    scrie_MATRICE(mat3);
    mat4 = inmulteste_MATRICE(mat1, mat2);
    scrie_MATRICE(mat4);
	return 0;
}