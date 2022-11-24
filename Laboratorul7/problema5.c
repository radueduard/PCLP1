#include <stdio.h>
#include <limits.h>

void panta(int x1, int y1, int x2, int y2, float *m, float *n){
    if (x1 == x2){
        *m = INT_MAX;
        *n = 0;
    }
    else {
        *m = (y2 - y1) / (x2 - x1);
        *n = y1 - *m * x1;
    }
}

int main(){
    int x1, x2, x3, y1, y2, y3;
    float m1, n1, m2, n2;
    scanf("%d%d", &x1, &y1);
    scanf("%d%d", &x2, &y2);
    scanf("%d%d", &x3, &y3);
    panta(x1, y1, x2, y2, &m1, &n1);
    panta(x1, y1, x3, y3, &m2, &n2);
    if(m1 - m2 < 0) printf("NU");
    else printf("DA");
    return 0;

}