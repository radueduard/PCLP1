//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int transforma(int n) {
    int nr, i, cif, c[10] = {0};
    while (n > 0) {
        cif = n % 10;
        c[cif]++;
        n = n / 10;
    }
    nr = 0;
    if (c[0] != 0) {
        for (cif = 9; cif >= 0; cif--)
            for (i = 0; i < c[cif]; i++)
                nr = nr * 10 + cif;
    } else {
        for (cif = 1; cif <= 9; cif++)
            for (i = 0; i < c[cif]; i++)
                nr = nr * 10 + cif;
    }
    return nr;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", transforma(n));
    return 0;
}