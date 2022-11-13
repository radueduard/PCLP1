//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int cmmdc(int, int);

int cmmmc(int, int);

int main() {
    int x1, x2, y1, y2;
    scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
    x1 = x1 * (cmmmc(x2, y2) / x2);
    x2 = cmmmc(x2, y2);
    y1 = y1 * (cmmmc(x2, y2) / y2);
    y2 = cmmmc(x2, y2);
    printf("%d %d\n%d %d", x1, x2, y1, y2);
    return 0;
}

int cmmdc(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int cmmmc(int a, int b) {
    return (a * b) / cmmdc(a, b);
}