//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int cmmmc(int a, int b){
    int r, aux1 = a, aux2 = b, multiplu;
    while(aux2){
        r = aux1 % aux2;
        aux1 = aux2;
        aux2 = r;
    }
    multiplu = (a * b) / aux1;
    return multiplu;
}

int main(){
    int x1, x2, y1, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    x1 = x1 * (cmmmc(y1, y2) / y1);
    x2 = x2 * (cmmmc(y1, y2) / y2);
    y1 = y2 = cmmmc(y1, y2);
    printf("%d %d\n%d %d", x1, y1, x2, y2);
    return 0;
}