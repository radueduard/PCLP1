//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include<stdio.h>

void spirala (int a[][100], int m, int *n, int v[])
{
    int p = 0;
    int up = 0, down = *n - 1, left = 0, right = m - 1, start = 0;
    while(start <= m * *n) {
        for (int i = up; i <= down; i++) {
            v[p++] = a[left][i];
            start++;
        }
            left++;
        for (int i = left; i <= right; i++) {
            v[p++] = a[i][down];
            start++;
        }
        down--;
        for (int i = down; i >= up; i--) {
            v[p++] = a[right][i];
            start++;
        }
        right--;
        for (int i = right; i >= left; i--) {
            v[p++] = a[i][up];
            start++;
        }
        up++;
    }
    *n = p;
}

void afisare (int v[], int dim)
{
    for(int i = 0; i < dim; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main()
{
    int a[100][100], v[100], n, m;
    scanf("%d%d", &m, &n);
    for(int i = 0; i < m; i++)
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    spirala(a, m, &n, v);
    afisare(v, n);
    return 0;
}