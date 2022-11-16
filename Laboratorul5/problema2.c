//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
 
int cifra(long n, int c) {
    do {
        if(c == n % 10)
            return 1;
        n /= 10;
    }while(n);
    return 0;
}
 
int main() {
    long n;
    int c;
    scanf("%ld%d", &n, &c);
    if(cifra(n, c))
        printf("DA\n");
    else printf("NU\n");
	return 0;
}
