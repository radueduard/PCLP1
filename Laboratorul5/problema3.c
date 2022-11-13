//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int prim(int);

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
        if (prim(i) == 1 && prim(n - i) == 1)
            printf("%d + %d\n", i, n - i);
    return 0;
}

int prim(int n) {
    if (n == 0)
        return 0;
    if (n > 2) {
        if (n % 2 == 0)
            return 0;
        int d;
        for (d = 3; d * d <= n; d += 2)
            if (n % d == 0)
                return 0;
    }
    return 1;
}