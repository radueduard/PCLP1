#include <stdio.h>
#include <math.h>

// integrala definita de la a la b din f(x) dx se calculeaza aproximativ cu relatia I=(b-a)*(f1+f2)/2

double integrala(double (*func)(double x), double a, double b, int n)
{
    double x1, x2, h, sum = 0;
    h = (a - b) / n;
    int i;
    for (i = 1; i < n; i++)
    {
        x1 = h * (i - 1);
        x2 = h * i;
        sum = sum + (func(x1) + func(x2)) * h / 2;
    }
    return sum;
}

int main()
{
    printf("Valoarea integralei lui sin(x) in intervalul [0;PI] este %.2lf\n", integrala(sin, 0, 3.14, 100));
    printf("Valoarea integralei lui cos(x) in intervalul [0;PI] este %.2lf\n", integrala(cos, 0, 3.14, 100));
}