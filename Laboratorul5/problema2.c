//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int cifra(int n, int c){
    while(n){
        if (n % 10 == c) return 1;
        n = n / 10;
    }
    return 0;
}

int main(){
    int a, b, result;
    scanf("%d%d", &a, &b);
    result = cifra(a, b);
    if(result == 1) printf("DA");
    else printf("NU");
}