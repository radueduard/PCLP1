#include <stdio.h>
double factorial(int n){
    int i;
    double s=1;
    for(i=1;i<=n;i++){
        s=s*i;
    }
    return s;
}
double putere(double x, int n){
    int i;
    double s=1;
    for(i=1;i<=n;i++){
        s=s*x;
    }
    return s;
}
double taylor(double x,int n){
    int i;
    double s=1;
    for(i=1;i<=n;i++){
        s=s+putere(x,i)/ factorial(i);
    }
    return s;
}

int main() {
    int n;
    double x;
    scanf("%lf%d",&x,&n);
    printf("%.4lf", taylor(x,n));
    return 0;
}
