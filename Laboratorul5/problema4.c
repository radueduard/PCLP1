//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include<stdio.h>

int cmmmc (int a,int b);

int main()
{
    int x1,x2,y1,y2,a=1,b=1,c=1,d=1;
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    if(y1==0 || y2==0)
    {
        printf("Date invalid introduse.");
        return 0;
    }
    a*=x1*(cmmmc(y1,y2)/y1);
    b=cmmmc(y1,y2);
    c=x2*(cmmmc(y1,y2)/y2);
    d=cmmmc(y1,y2);
    printf("%d %d\n%d %d\n",a,b,c,d);
}

int cmmmc (int a,int b)
{
    int x=a,y=b;
    while(a!=b)
    {
        if(a>b)
        a-=b;
        else
        b-=a;
    }
    return x*y/a;
}