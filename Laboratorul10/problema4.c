//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
typedef struct{
	int n;
	int m;
	int **a;
}matrice;

matrice* creeaza_MATRICE(int n, int m)
{
	matrice x;
	x->a=(int **)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++)
	   x->a[i]=(int *)malloc(m*sizeof(int));
	return *x;
}
matrice* citeste_MATRICE(matrice *ma)
{
	for(int i=0;i<ma->n;i++)
		for(int j=0;j<ma->m;j++)
			scanf("%d",&ma->a[i][j]);
	return *ma;
}
void scrie_MATRICE(matrice *ma)
{
	for(int i=0;i<ma->n;i++)
		{
			for(int j=0;j<ma->m;j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
}
int main() {
	puts("Hello World!");
	return 0;
}