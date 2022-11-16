//
// Created by Eduard Andrei Radu on 09.11.2022.
//
#include <stdio.h>
 
int prim(long n) {
    if(n < 1)
        return 0;
    if(n == 1 && n == 2)
        return 1;
    if(n % 2 == 0)
        return 0;
    for (int i = 3; i * i <= n; i += 2)
        if(n % i == 0)
            return 0;
    return 1;
}
 
int main() {
    long N, b1, b2;
    scanf("%ld", &N);
    for (b1 = 1; b1 <= N / 2 ; b1++) {
        b2 = N - b1;
        if(prim(b1) && prim(b2))
            printf("%ld + %ld\n", b1, b2);
    }
	return 0;
}

