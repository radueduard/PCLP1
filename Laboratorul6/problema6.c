//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>

void spirala(int A[][100], int m, int n, int v[]) {
    int afisat[100][100], len = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            afisat[i][j] = 1;

    int k;
    if(m > n) k = m / 2 + 1;
    else k = n / 2 + 1;

    for (int i = 0; i <= k; i++) {
        for (int j = 0 + i; j < m - i; j++)
            if(afisat[j][i] == 1) {
                v[len++] = A[j][i];
                afisat[j][i] = -1;
            }
        for (int j = 0 + i; j < n - i; j++)
            if(afisat[m - 1 - i][j] == 1) {
                v[len++] = A[m - 1 - i][j];
                afisat[m - 1 - i][j] = -1;
            }
        for (int j = m - 1 - i; j > 0 + i; j--)
            if(afisat[j][n - 1 - i] == 1) {
                v[len++] = A[j][n - 1 - i];
                afisat[j][n - 1 - i] = -1;
            }
        for (int j = n - 1 - i; j > 0 + i; j--)
            if(afisat[0 + i][j] == 1) {
                v[len++] = A[0 + i][j];
                afisat[0 + i][j] = -1;
            }
    }
}

void afisare(int v[], int dim) {
    for (int i = 0; i < dim; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main()
{
    int A[100][100], v[10000], n, m, dim;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    dim = m * n;
    spirala(A, m, n, v);
    afisare(v, dim);
    return 0;
}