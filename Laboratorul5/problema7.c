#include <stdio.h>

int transforma(int n)
{
	int v[10], i;
	for (i = 0; i <= 9; i++)
		v[i] = 0;
	while (n != 0)
	{
		v[n % 10]++;
		n = n / 10;
	}
	if (v[0] != 0)
	{
		for (i = 9; i >= 0; i--)
			while (v[i] != 0)
			{
				n = n * 10 + i;
				v[i]--;
			}
	}
	else
	{
		for (i = 1; i <= 9; i++)
			while (v[i] != 0)
			{
				n = n * 10 + i;
				v[i]--;
			}
	}
	return n;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", transforma(n));
}