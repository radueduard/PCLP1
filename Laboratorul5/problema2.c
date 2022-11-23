//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int cifra(int n, int c)
{
	int k = 0, r;
	while (n > 0)
	{
		r = n % 10;
		if (r == c)
		{
			k++;
		}
		n = n / 10;
	}
	return k;
}
int main()
{
	int n, c;
	scanf("%d%d", &n, &c);
	if (cifra(n, c) == 0)
	{
		printf("NU");
	}
	else
	{
		printf("DA");
	}
	return 0;
}