//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int prim(int n){
    int i;
    for (i = 2; i < n - 1; i++){
        if(n % i == 0) return 1;
    }
    return 0;
}

int main(){
    int a, result, i, j;
    scanf("%d", &a);
//    result = prim(a);
//    if (result == 1) printf("neprim");       pt punctul A)
//    else printf("prim");
    i = 1, j = a - 1;
    if(a % 2 == 0) {
        while (i < j && j >= i) {
            if (prim(i) == 0 && prim(j) == 0 && a == i + j) {
                printf("%d + %d\n", i, j);
            }
            i++;
            j--;
        }
    }
    else printf("nu se poate");
    return 0;
}