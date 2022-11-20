#include <stdio.h>
#include <math.h>
float dist(int x1,int y1,int x2,int y2)
{
    float d;
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return d;
}
int main() {
    int x[100],y[100],n,a,b,c,d;
    float Max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int i=0;i<=n-2;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(dist(x[i],y[i],x[j],y[j])>Max)
            {
                Max=dist(x[i],y[i],x[j],y[j]);
                a=x[i];
                b=y[i];
                c=x[j];
                d=y[j];
            }
        }
    }
    printf("%d %d\n%d %d\n%f",a,b,c,d,Max);
    return 0;
}