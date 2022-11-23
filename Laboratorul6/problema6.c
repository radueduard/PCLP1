//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
void afisare (int V[], int dim)
{
    int i;
    for ( i = 0; i < dim; i++)
    {
        printf("%d", V[i]);
    }
    
}
void spirala(int A[][100], int m, int n, int V[])
{
    int y = 0, x = 0, size = 0;
    while (y < m && x < n) 
    {
        for (int i = y; i < m; ++i) 
        {
            V[size] = A[i][x];
            size++;
        }
        x++;

        for (int i = x; i < n; i++) 
        {
            V[size] = A[m - 1][i];
            size++;
        }
        m--;

        if (x < n) 
        {
            for (int i = m - 1; i >= y; --i) 
            {
                V[size] = A[i][n - 1];
                size++;
            }
        n--;
        }

        if (y < m) 
        {
            for (int i = n - 1; i >= x; --i) 
            {
                V[size] = A[y][i];
                size++;
            }
        y++;
        }
    }
    return size;
}
int main()
{
    int arr1[100][100], answer[100], n , x, i, j, dim;
    scanf("%d %d", &n, &x);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < x; j++)
        {
            scanf("%d", arr1[i][j]);
        }
    }
    spirala(arr1, n , x, answer);
    afisare(answer, dim);
    return 0;
}