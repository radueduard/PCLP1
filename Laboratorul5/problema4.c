
#include <stdio.h>
void cmmc(int x1,int y1,int x2,int y2)
{
    int r,a,b,m;
    a=y1;b=y2;
    r=a%b;
    while(r)
    {
        a=b;
        b=r;
        r=a%b;
    }
    m=(y1*y2)/b;
    x1=x1*y2/b;
    x2=x2*y1/b;
    y1=y2=m;
    printf("%d %d\n%d %d",x1,y1,x2,y2);
}

int main() {
	int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    cmmc(a,b,c,d);
	return 0;
}