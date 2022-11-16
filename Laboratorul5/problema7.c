//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
 
int transforma(int n) {
    int cif[10];
    for (int i = 0; i < 10; i++)
        cif[i] = 0;
    do {
        cif[n % 10]++;
        n /= 10;
    } while (n);
    n = 0;
    if (cif[0]) {
        for (int i = 9; i >= 0; i--)
            for (int j = 1; j <= cif[i]; j++) {
                n = n * 10 + i;
            }
    } else {
        for (int i = 1; i <= 9; i++)
            for (int j = 1; j <= cif[i]; j++) {
                n = n * 10 + i;
            }
    }
    return n;
}
 
int main() {
    int n;
    scanf("%d", &n);
    n = transforma(n);
    printf("%d\n", n);
	return 0;
}
