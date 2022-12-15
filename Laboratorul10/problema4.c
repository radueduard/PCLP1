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

MATRICE* inmulteste_MATRICE(MATRICE* ma, MATRICE* mb){
    matrice *inmultire;
    n = mb -> (m - 1);
    if (ma -> m != mb -> n)
        return NULL;
    else{
        inmultire = creeaza_MATRICE(mb -> n , mb -> m);
        for(int i = 0; i -> inmultire -> )
    }

}



int main() {

}