//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int cmmmc(int a, int b)
{
    int aa = a;
    int bb = b;
    while(bb != aa)
    {
        if(bb > aa) bb = bb - aa;
        else aa = aa - bb;
    }
    return (a * b) / aa;
}

int main() {
    int x1, x2, y1, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    int CMMMC = cmmmc(y1, y2);
    int p1 = CMMMC / y1;
    int p2 = CMMMC / y2;
    printf("%d %d\n%d %d\n", x1 * p1, y1 * p1, x2 * p2, y2 * p2);
    return 0;
}