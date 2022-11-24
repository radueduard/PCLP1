//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include<stdio.h>

void spirala (int A[][100], int m, int n, int V[])
{
<<<<<<< HEAD
    int start = 0, end = m * n, linie_sus = 0, linie_jos = n - 1, coloana_stanga = 0, coloana_dreapta = m - 1, k = -1;
    int deplasare = 1;
    while(start < end)
    {
        if(deplasare == 1)
        {
            for(int i = linie_sus; i <= linie_jos; i ++)
            {
                V[++ k] = A[i][coloana_stanga]; start ++;
            }
            deplasare = 2;
            coloana_stanga ++;
        }
        else if(deplasare == 2)
        {
            for(int j = coloana_stanga; j <= coloana_dreapta; j ++)
            {
                V[++ k] = A[linie_jos][j]; start ++;
            }
            deplasare = 3;
            linie_jos --;
        }
        else if(deplasare == 3)
        {
            for(int i = linie_jos; i >= linie_sus; i --)
            {
                V[++ k] = A[i][coloana_dreapta]; start ++;
            }
            deplasare = 4;
            coloana_dreapta --;
        }
        else
        {
            for(int j = coloana_dreapta; j >= coloana_stanga; j --)
            {
                V[++ k] = A[linie_sus][j]; start ++;
            }
            deplasare = 1;
            linie_sus ++;
        }
    }

}
void afisare (int V[], int dim)
{
    for(int i = 0; i < dim; i++)
        printf("%d ", V[i]);
    printf("\n");
}

int main() {
    int n, m, A[100][100], V[10000];
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < m; j ++)
            scanf("%d", & A[i][j]);

    spirala(A, m, n, V);
    afisare(V, m * n);
    return 0;
=======
	puts("Hello World!");
	return 0;
>>>>>>> main
}