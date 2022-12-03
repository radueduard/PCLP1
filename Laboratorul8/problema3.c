#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	unsigned int n;
	int (*v),k=0,m=2,sw;
	char (*sir)[100],(*cuv)[100];
	scanf("%d", &n);
	if (n > 1000)
	{
		printf("Date invalid introduse.");
		return 0;
	}
	sir = (char(*)[100])malloc(n * sizeof(char[100]));
	cuv = (char(*)[100])malloc(m * sizeof(char[100]));
	v = malloc(m * sizeof(int));
	for(int i=0;i<n;i++)
		scanf("%s", sir[i]);
	for (int i = 0; i < n; i++)
	{
    sw=0;
		for (int j = 0; j < k; j++)
		{
			if (strcmp(cuv[j], sir[i]) == 0)
			{
				v[j]++;
                sw=1;
			}
		}
			if (k >= m)
			{
				m *= 2;
				cuv = (char(*)[100])realloc(cuv, m * sizeof(char[100]));
				v = realloc(v, m * sizeof(int));
			}
			if (sw == 0)
			{
				strcpy(cuv[k], sir[i]);
				v[k] = 1;
				k++;
			}
	}
	for (int i = 0; i < k; i++)
		printf("%s %d\n", cuv[i], v[i]);
}
