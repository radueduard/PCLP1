#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* vim, * vi,n,k,*p;
	scanf("%d%d", &n, &k);
	if (n < 0 || n>25 || k < 0 || k>25)
	{
		printf("Date invalid introduse.");
		return 0;
	}
	vim = malloc(n * sizeof(int));
	vi = malloc(n * sizeof(int));
	vi[0] = 1;
    for (int i = 0; i <= k; i++)
    vim[i]=1;
	for (int i = 1; i <= n; i++)
	{
		p = vim;
		vim = vi;
		vi = p;
	}
	//printf("%d\n", vi[k]);
}