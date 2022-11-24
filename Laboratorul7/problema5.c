#include <stdio.h>
#include <limits.h>
void panta(int x1,int y1,int x2,int y2,float *m,float *n)
{
    if(y2-y1==0)
        (*m)=INT_MAX;
    else
    {
        (*m)=((float)(x2-x1)/(y2-y1));
    }
}
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float m=0,n=0;
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    panta(x1,y1,x2,y2,&m,&n);
    if(m==0)
    {
        if(x1==x3)
            printf("DA");
        else
            printf("NU");
    }
    else
    {
        if(m==INT_MAX)
        {
            if(y1==y3)
                printf("DA");
            else
                printf("NU");
        }
        else
        {
            if(y3==m*x3+y2-m*x2)
                printf("DA");
            else
                printf("NU");
        }
    }
}