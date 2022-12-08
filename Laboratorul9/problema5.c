#include <stdio.h>

typedef struct{
    float re;
    float im;
}complex;
complex adunare(complex a, complex b)
{
    complex s;
    s.re = a.re + b.re;
    s.im = a.im + b.im;
    return s;
 }
 complex scadere(complex a, complex b)
 {
    complex d;
    d.re = a.re - b.re;
    d.im = a.im - b.im;
    return d;
 }
 complex inmultire(complex a, complex b)
 {
    complex x;
    x.re = a.re * b.re - a.im * b.im;
    x.im = a.re * b.im + a.im *b.re;
    return x;
 }
 complex putere(complex a, int putere)
 {
    complex p;
    if(putere == 0)
    {
        p.re = 1;
        p.im = 0;
    }
    else
    {
        p.re = 1;
        p.im = 1;
        for(int i = 1; i <= putere; i++)
        {
            p.re *= a.re * a.re - a.im * a.im;
            p.im *= 2 * a.re * a.im;
        }
    }
    return p;
 }
 void scrie(complex a)
 {
    printf("(%f,%f)\n", a.re, a.im);
 }
int main()
{
    complex P, pow, z, coef[100];
    int n;
    scanf("%f%f%d", &z.re, &z.im, &n);
    for(int i = 0; i <= n; i++)
    {
        scanf("%f", &coef[i].re);
        coef[i].im = 0;
    }
    for(int i = 0; i <= n; i++)
    {
        pow = putere(z, i);
        P = adunare(P ,inmultire(pow, coef[i]));
    }
    scrie(P);
    return 0;
}