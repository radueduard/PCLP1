#include <stdio.h>

typedef struct{
    float re;
    float im;
}complex;

complex adunare(complex a, complex b)
{
    complex c;
    c.re=a.re+b.re;
    c.im=a.im+b.im;
    return c;
}

complex inmultirea(complex a, complex b)
{
    complex c;
    c.re=(a.re*b.re)-(a.im*b.im);
    c.im=(a.re*b.im)+(b.re*a.im);
    return c;
}

complex putere(complex a, int putere)
{
    int i;
    complex c;
    c.im=a.im;
    for(i=2; i<=putere; i++)
        c.re=a.re*a.re;
    return c;
}

void scrie(complex a)
{
    printf("(%f,%f)", a.re, a.im);
}

int main()
{
    complex x;
    int i, n, c[100];
    scanf("%d", &n);
    scanf("%f%f", &x.re, &x.im);
    for(i=0; i<n; i++)
        

}