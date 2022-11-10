//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int prim(int n)
{
    if(n == 0) return 0;
    if(n == 2 || n == 1) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3; i * i <= n; i = i + 2)
        if(n % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n/2; i++)
        if(prim(i) == 1 && prim(n - i) == 1) printf("%d + %d\n", i, n - i);
    return 0;
}