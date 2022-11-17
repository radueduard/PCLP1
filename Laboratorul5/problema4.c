#include <stdio.h>

int cmmmc(int a, int b)
{
	int n=a, m=b;
    while(m !=0)
    {
        int r=n % m;
        n=m;
        m=r;
    }
    return (a*b)/n;
}

int main()
{
	int x1,y1,x2,y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	int y=cmmmc(y1,y2);
	x1=x1*(y/y1);
	x2=x2*(y/y2);
	printf("%d %d\n%d %d\n", x1, y, x2, y);
}