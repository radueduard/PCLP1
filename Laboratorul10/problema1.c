//
// Created by Eduard Andrei Radu on 09.11.2022.
//
#include <stdio.h>
#include <math.h>

double integrala(double(*func) (double x), double a, double b, int n)
{
    double x1, x2, h, s = 0;
    h = (b - a) / n;
    for(int i = 1; i <= n; i++)
    {
        x1 = h * (i - 1);
        x2 = h * i;
        s += ((func(x1) + func(x2)) * h) / 2;
    }
    return s;
}
int main()
{
    printf("%lf\n", integrala(sin, 0, M_PI, 100));
    printf("%lf\n", integrala(cos, 0, M_PI, 100));
    return 0;
}
