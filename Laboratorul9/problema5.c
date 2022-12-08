#include <stdio.h>

typedef struct
{
    float re,im;
}complex;
complex adunare(complex a, complex b)
{
  complex c;
  c.re=a.re+b.re;
  c.im=a.im+b.im;
  return c;
}
complex scadere(complex a,complex b)
{
    complex c;
    c.re=a.re-b.re;
    c.im=a.im-b.im;
    return c;
}
complex inmultire(complex a,complex b)
{
    complex c;
    c.re=a.re*b.re-(a.im*b.im);
    c.im=a.re*b.re+(a.im*b.im);
    return c;
}
complex putere(complex a,int putere)
{
    complex c;
    c=a;
    if(putere!=0){
    putere--;
    while(putere)
    {
        c=inmultire(c,a);
        putere--;
    }
    }
    else
    {
        c.re=1;
        c.im=0;
    }
    return c;
}
void scrie(complex a)
{
    printf("(%f,%f)",a.re,a.im);
}
int main()
{complex a,b,c;
int n;
scanf("%f%f",&a.re,&a.im);
scanf("%f%f",&b.re,&b.im);
scanf("%d",&n);
c=putere(a,n);
scrie(c);    
    return 0;
}