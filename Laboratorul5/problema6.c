//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <math.h>
 
float dist(int x1, int y1, int x2, int y2) {
    float distanta = 0;
    distanta = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    distanta = sqrt(distanta);
    return distanta;
}
 
int main() {
    int  n, x, y, x1Max, y1Max, x2Max, y2Max, xVect[100], yVect[100];
    float d, distMax;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d%d", &xVect[i], &yVect[i]);
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            d = dist(xVect[i], yVect[i], xVect[j], yVect[j]);
            if(d > distMax) {
                distMax = d;
                x1Max = xVect[i]; y1Max = yVect[i];
                x2Max = xVect[j]; y2Max = yVect[j];
            }
        }
    printf("%d %d\n", x1Max, y1Max);
    printf("%d %d\n", x2Max, y2Max);
    printf("%f\n", distMax);
    return 0;
}
