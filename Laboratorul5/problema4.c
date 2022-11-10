#include <stdio.h>
int cmmdc(int a,int b){
    int r;
    while(b){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int cmmmc(int a,int b){
    return (a*b)/ cmmdc(a,b);
}
int main() {
    int x1,y1,x2,y2,c;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    c= cmmmc(y1,y2);
    x1=x1*(c/y1);
    x2=x2*(c/y2);
    printf("%d %d\n%d %d",x1,c,x2,c);
    return 0;
}
