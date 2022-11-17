//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include<stdio.h>

int factorial(int n);
double putere(double x, int n);
double taylor(double x, int n);

int main()
{
    double X;
    unsigned int N;
    scanf("%lf",&X);
    scanf("%u",&N);
    if(N<=0 || N>1000)
    {
        printf("Date invalid introduse.");
        return 0;
    }
    printf("%lf\n",taylor(X,N));
}

int factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    f*=i;
    return f;
}

double putere(double x, int n)
{
    double y=1;
    for(int i=1;i<=n;i++)
    y*=x;
    return y;
}

double taylor(double x, int n)
{
    double ex=1;
    for(int j=1;j<=n;j++)
    ex=ex+putere(x,j)/factorial(j);
    return ex;
}