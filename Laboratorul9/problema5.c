#include <stdio.h>

typedef struct {
    float re,im;
}complex;

complex adunare(complex a, complex b){
    complex z;
    z.re=a.re+b.re;
    z.im=a.im+b.im;
    return z;
}

complex scadere(complex a,complex b){
    complex z;
    z.re=a.re-b.re;
    z.im=a.im-b.im;
    return z;
}

complex inmultire(complex a, complex b){
    complex z;
    z.re=a.re*b.re-a.im*b.im;
    z.im=a.re*b.im+a.im*b.re;
}

complex putere(complex a, int putere){
    complex z;
    z=a;
    if(putere!=0){
        putere--;
        while(putere){
            z=inmultire(z,a);
            putere--;
        }
    }else{
        z.re=1;
        z.im=0;
    }
    return z;
}

void scrie_vector(complex a){
    printf("%f,%f",a.re,a.im);
}

int main()
{
    complex a,b,c;
    int n;
    scanf("%f%f",&a.re,&a.im);
    scanf("%f%f",&b.re,&b.im);
    scanf("%d",&n);
    c=putere(a,n);
    scrie_vector(c);
}