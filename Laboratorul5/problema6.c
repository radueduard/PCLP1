//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    int n, x[100], y[100];
    scanf("%d", &n);
    double max_dist = 0;
    int X1, X2, Y1, Y2;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d%d", &x[i], &y[i]);
    }
    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(dist(x[i], y[i], x[j], y[j]) > max_dist)
            {
                max_dist = dist(x[i], y[i], x[j], y[j]);
                X1 = x[i];
                Y1 = y[i];
                X2 = x[j];
                Y2 = y[j];
            }
    printf("%d %d\n%d %d\n%lf\n", X1, Y1, X2, Y2, max_dist);
    return 0;
}