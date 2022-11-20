#include <stdio.h>
#include <math.h>
int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n* factorial(n-1);
}
double put(double x,double n)
{
    double y=pow(x,n);
    return y;
}

int main() {
    double x,n;
    scanf("%lf %lf",&x,&n);
    double S=1;
    for(int i=1;i<=n;i++)
    {
        S=S+put(x,i)/ factorial(i);
    }
    printf("%0.4lf",S);
	return 0;
}