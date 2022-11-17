//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include<stdio.h>
#include<math.h>

int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21, int x22, int y22);

int main()
{
    int a,b,c,d,x,y,z,t;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    scanf("%d%d%d%d",&x,&y,&z,&t);
    if(a<0 || a>1000000 || b<0 || b>1000000 || c<0 || c>1000000 || d<0 || d>1000000)
    {
        printf("Date invalid introduse.");
        return 0;
    }
    if(x<0 || x>1000000 || y<0 || y>1000000 || z<0 || z>1000000 || t<0 || t>1000000)
    {
        printf("Date invalid introduse.");
        return 0;
    }
    printf("%d",arie_intersectie(a,b,c,d,x,y,z,t));
}

int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21, int x22, int y22)
{
    int x1,x2,y1,y2,max,min;
    float L,l;
    if(x21<x11)
    x1=x11;
    else
    x1=x21;

    if(y21<y11)
    y1=y21;
    else
    y1=y11;

if(x12>x22)
    x2=x22;
    else
    x2=x12;

if(y12<y22)
    y2=y22;
    else
    y2=y12;

    L=sqrt((x2-x1)*(x2-x1));
    l=sqrt((y2-y1)*(y2-y1));
    if(x11<x22 && x12>x21 && y11< y22 && y12>y21)
    return L*l;
    else
    return 0;
}