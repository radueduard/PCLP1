//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include<stdio.h>

int main()
{
	int A[100][100], m, n, V[100];
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			scanf("%d", &A[i][j]);
	}
	spirala(A, m, n, V);
	afisare(V, n * m);
}

void spirala(int A[][100], int m, int n, int V[])
{
	int l = 0, k1 = 0, k2 = 0, n1 = n, p1 = 1, p2 = n - 1, m1 = m, n2 = n - 2, q1 = 1, q2 = m - 1, m2 = m - 1, r1 = 1, r2 = 0;
	while (l <= n * m)
	{
		for (int i = k1; i < n1; i++)
		{
			V[l] = A[i][k2];
			l++;
		}
		n1--;
		k1++;
		k2++;
		for (int j = p1; j < m1; j++)
		{
			V[l] = A[p2][j];
			l++;
		}
		m1--;
		p1++;
		p2--;
		for (int i = n2; i >= q1; i--)
		{
			V[l] = A[i][q2];
			l++;
		}
		n2--;
		q1++;
		q2--;
		for (int j = m2; j >= r1; j--)
		{
			V[l] = A[r2][j];
			l++;
		}
		m2--;
		r1++;
		r2++;
	}
}

void afisare(int V[], int dim)
{
	for (int i = 0; i < dim; i++)
		printf("%d ", V[i]);
	printf("\n");
}