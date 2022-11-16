//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
int factorial(int n)
{
    if(n == 0)
        return 1;
    return n * factorial(n - 1);

}
double putere(double x, int n)
{
    if( n == 0)
        return 1;
    if(n % 2 == 0)
        return putere(x, n / 2) * putere(x, n / 2);
    else
        return putere(x, n / 2) * putere(x, n / 2) * x;
}
double taylor(double x, int n)
{
    double r;
    if(n == 0)
        return 1;
    r = taylor(x, n - 1);
    return r + putere(x, n) / factorial(n);
}
int main()
{
    int n;
    double x;
    scanf("%lf%d", &x, &n);
    printf("%1.4lf\n", taylor(x, n));
    return 0;
}
