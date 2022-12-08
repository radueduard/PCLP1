#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    float real;
    float img;
}complex;
complex adunare(complex a,complex b)
{
    complex c;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    return c;
}
complex adunare(complex a,complex b)
{
    complex c;
    c.real=a.real-b.real;
    c.img=a.img-b.img;
    return c;
}
complex inmultire(complex a,complex b)
{
    complex c;
    c.real=a.real*b.real-a.img*b.img;
    c.img=a.real*b.img+a.img*b.real;
    return c;

}
complex putere(complex a,int putere)
{
    complex c;
    c=a;
    if(putere!=0){
        putere--;
        while(putere){
            c=inmultire(c,a);
            putere--;
        }

    }else{
        c.real=1;
        c.img=0;
    }
    return c;
}
void scrie_vector(complex a){
    printf("%f%f", a.real,a.img);
}
int main()
{
    complex a,b,c;
    int n;
    scanf("%f%f",&a.real,&a.img);
    scanf("%f%f",&b.real,&b.img);
    scanf("%d",&n);
    c=putere(a,n);
    scrie_vector(c);

}
