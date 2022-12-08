#include <stdio.h>
#include <math.h>
struct numar_complex
{
    float im;
    float re;
};

int putere_re(int n, int putere)
{
    int p = 1;
    for(int i = 1; i <= putere; i++)
        p = p * n;
    return p;
}

void adunare(struct numar_complex *a, struct numar_complex *b)
{
    a->im = a->im + b->im;
    a->re = a->re + b->re;
}

void scadere(struct numar_complex *a, struct numar_complex *b)
{
    a->im = a->im - b->im;
    a->re = a->re - b->re;
}

void inmultire(struct numar_complex *a, struct numar_complex *b)
{
    float a_re = a->re, a_im = a->im, b_re = b->re, b_im = b->im;
    a->re = a->re * b->re - a->im * b->im;
    a->im = a_re * b_im + a_im * b_re;
}

void putere(struct numar_complex *a, int putere)
{
    a->re = putere_re(sqrt(a->re * a->re + a->im * a->im), putere) * cos((atan(a->im / a->re)) * putere);
    a->im = putere_re(sqrt(a->re * a->re + a->im * a->im), putere) * sin((atan(a->im / a->re)) * putere);
}

void afisare(struct numar_complex *a)
{
    printf("(%f, %f)", a->re, a->im);
}

int main() {

    int grad_polinom;
    struct numar_complex a, b, variabila;
    float coef[100];
    scanf("%d", &grad_polinom);
    scanf("%f%f", &variabila.re, &variabila.im);
    for(int i = 0; i <= grad_polinom; i++)
        scanf("%f", &coef[i]);

    a.re = coef[0];
    a.im = 0;
    for(int i = 1; i <= grad_polinom; i++)
    {
        b.re = variabila.re;
        b.im = variabila.im;
        int t = i;
        while(t > 1)
        {
            inmultire(&b, &variabila);
            t--;
        }

        b.im = coef[i] * b.im;
        b.re = coef[i] * b.re;
        adunare(&a, &b);
    }
    afisare(&a);
    return 0;
}