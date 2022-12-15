#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int n;
	int m;
	int **a;
} MATRICE;

MATRICE *creeaza_MATRICE(int n, int m)
{
	MATRICE *matrix = malloc(sizeof(MATRICE));
	matrix->n = n;
	matrix->m = m;
	matrix->a = (int **)malloc(n * sizeof(int *));
	for (int i = 0; i < m; i++)
		matrix->a[i] = (int *)malloc(m * sizeof(int));
	return matrix;
}

MATRICE *citeste_MATRICE(MATRICE *ma)
{
	for (int i = 0; i < ma->n; i++)
		for (int j = 0; j < ma->m; j++)
			scanf("%d", &ma->a[i][j]);
	return ma;
}

void scrie_MATRICE(MATRICE *ma)
{
	for (int i = 0; i < ma->n; i++)
	{
		for (int j = 0; j < ma->m; j++)
			printf("%d ", ma->a[i][j]);
		printf("\n");
	}
}

MATRICE *aduna_MATRICE(MATRICE *ma, MATRICE *mb)
{
	if (ma->n != mb->n || ma->m != mb->m)
		return NULL;
	MATRICE *mc = creeaza_MATRICE(ma->n, ma->m);
	for (int i = 0; i < ma->n; i++)
		for (int j = 0; j < ma->m; j++)
			mc->a[i][j] = ma->a[i][j] + mb->a[i][j];
	return mc;
}

MATRICE *inmulteste_MATRICE(MATRICE *ma, MATRICE *mb)
{
	if (ma->m != mb->n)
		return NULL;
	MATRICE *mc = creeaza_MATRICE(ma->n, mb->m);
	for (int i = 0; i < mc->n; i++)
		for (int j = 0; j < mc->m; j++)
		{
			mc->a[i][j] = 0;
			int row = i;
			int col = j;
			for (int k = 0; k < ma->m; k++)
				mc->a[i][j] = mc->a[i][j] + ma->a[row][k] * mb->a[k][col];
		}
	return mc;
}

int main()
{

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