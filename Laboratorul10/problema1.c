#include <stdio.h>
#include <math.h>
int adn(int a,int b){
    return a+b;
}
int scd(int a,int b){
    return a-b;
}
int inm(int a,int b){
    return a*b;
}
int mare(int a,int b,int(*func)(int a,int b)){
    return func(a,b);
}
double integrala(double(*func)(double x),double a,double b,int n){

}
int main() {
    int (*operatii[3])(int,int)={adn,scd,inm};
    printf("%d\n",mare(7,5,operatii[0]));
    printf("%d\n",mare(7,5,operatii[1]));
    printf("%d\n",mare(7,5,operatii[2]));


    return 0;
}