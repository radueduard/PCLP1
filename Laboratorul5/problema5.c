#include <stdio.h>

int factorial(int n)
{
	int i, f = 1;
	for (i = 1; i <= n; i++)
		f = f * i;
	return f;
}
double putere(double x, int n)
{
	int i;
	float p = x;
	if(n == 0)
		return 1;
	for (i = 1; i < n; i++)
		p = p * x;
	return p;
}

int main()
{
	double x, s=0;
	int n, i;
	scanf("%lf%d", &x, &n);
	for (i = 0; i < n; i++)
	{
		s = s + putere(x, i) / factorial(i);
	}
	printf("e^x=%0.4lf\n", s);
}