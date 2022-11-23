#include <stdio.h>
#include <math.h>

int unghi(float x, float y, float z, float *a, float *b, float *c)
{
    float p;
    p=(x+y+z)/2;
    float r,h;
    h=sqrt(p*(p-x)*(p-y)*(p-z));
    r=(x*y*z)/(4*h);
    *a=(180/M_PI)*(asin(x/(2*r)));
    *b=(180/M_PI)*(asin(y/(2*r)));
    *c=(180/M_PI)*(asin(z/(2*r)));
}

 int main ()
 {
    float x,y,z;
    scanf("%f%f%f",&x,&y,&z);
    float a,b,c;
    unghi(x,y,z,&a,&b,&c);
    printf("%0.3f %0.3f %0.3f",a,b,c);
    return 0;
 }