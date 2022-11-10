//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int cifra(int n, int c)
{
    if(n == 0 && c == 0) return 1;
    else if(n < 0) n = n * (-1);

    while(n)
    {
        if(n % 10 == c) return 1;
        n = n / 10;
    }
    return 0;
}

int main() {
    long int n;
    int c;
    scanf("%ld%d", &n, &c);
    if(cifra(n, c)) printf("DA\n");
    else printf("NU\n");

    return 0;
}