//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int cifra(int, int);

int main() {
    int n, c;
    scanf("%d%d", &n, &c);
    if (cifra(n, c))
        printf("DA");
    else
        printf("NU");
    return 0;
}

int cifra(int n, int c) {
    do {
        if (n % 10 == c)
            return 1;
        n /= 10;
    } while (n);
    return 0;

}