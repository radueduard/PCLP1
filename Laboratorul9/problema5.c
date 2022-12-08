#include <stdio.h>
#include <math.h>
struct complex{
    float pr,pi;
};
struct complex adunare(struct complex a,struct complex b){
    struct complex c;
    c.pr=a.pr+b.pr;
    c.pi=a.pi+b.pi;
    return c;
}
struct complex scadere(struct complex a,struct complex b){
    struct complex c;
    c.pr=a.pr-b.pr;
    c.pi=a.pi-b.pi;
    return c;
}
struct complex inmultire(struct complex a,struct complex b){
    struct complex c;
    c.pr=a.pr*b.pr-(a.pi*b.pi);
    c.pi=a.pr*b.pi+b.pr*a.pi;
}
struct complex putere(struct complex a,int putere){
    struct complex b,c;
    c=a;
    if(putere!=0){
        putere--;
        while(putere){
            c= inmultire(c,a);
            putere--;
        }
    }
    else {
        c.pr=1;
        c.pi=1;
    }
    return c;
}
void afisare(struct complex a){
    printf("%f+%fi \n",a.pr,a.pi);
}
int main()
{
    struct complex a,b,c;
    int n;
    scanf("%f%f",&a.pr,&a.pi);
    scanf("%f%f",&b.pr,&b.pi);
    scanf("%d",&n);
    afisare(adunare(a,b));
    afisare(scadere(a,b));
    afisare(inmultire(a,b));
    c= putere(a,n);
    afisare(c);
    return 0;
}