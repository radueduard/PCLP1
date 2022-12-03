#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h> //tolower

int litere(char* s1, char* s2);

int main()
{
	int n;
	char (*p)[100];
	scanf("%d", &n);
	if (n > 100)
	{
		printf("Date invalid introduse.");
		return 0;
	}
	p = (char(*)[100])malloc(n * sizeof(char[100]));
	for (int i = 0; i < n; i++)
		scanf("%s", p[i]);
	int i = 0;
	printf("%s", p[i]);
	while (i<n)
	{
		int j = i + 1;
			while (litere(p[i], p[j]) == 0)
			{
				j++;
			}
		if(litere(p[i], p[j]) != 0)
		{
			printf("-%s", p[j]);
			i=j;
		}
	}
    free(p);
    printf("\n");
}

int litere(char* s1, char *s2)
{
	int n,ls1_1,ls2_1,ls1_2,ls2_2;
	n = strlen(s1);
	ls1_1 = tolower(s1[n - 1]);
	ls1_2 = tolower(s1[n - 2]);
	ls2_1 = tolower(s2[0]);
	ls2_2 = tolower(s2[1]);
	if (ls1_1 == ls2_1 && ls1_2 == ls2_2)
		return 1;
	return 0;
}