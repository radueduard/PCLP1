//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include<stdio.h>
#include<math.h>

float dist(int x1, int x2, int y1, int y2){
    float d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    return sqrt(d);
}

int main(){
    int x[100], y[100], i, j, n, jm, im;
    float dmax = 0, d;
    scanf("%d", &n);
    for(i = 0; i < n; i ++){
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            d = dist(x[i], x[j], y[i], y[j]);
            if (dmax < d){
                dmax = d;
                jm = j;
                im = i;
            }
        }
    }
    printf("(%d %d)\n(%d %d)\n%f", x[im], y[im], x[jm], y[jm], dmax);
    return 0;
}