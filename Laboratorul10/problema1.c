#include <stdio.h>
#include <math.h>

double integrala (double (*func) (double x), double a, double b, int n)
{
    double surface = 0;
    double PAS;
    PAS = (b - a) / n;
    for (double i = a + PAS; i <= b; i = i + PAS)
    {
        surface = surface + ( (func (i - PAS) + func (i)) * PAS / 2 );
    }
    return surface;
}

int main() {

    double a, b;
    int n;
    scanf("%lf%lf%d", &a, &b, &n);

    printf("%lf\n%lf\n", integrala(sin, a, b, n), integrala(cos, a, b, n));

    return 0;
}