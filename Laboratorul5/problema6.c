//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main()
{
    float max = 0;
    int n, x[100], y[100] , x_max1, y_max1, x_max2, y_max2;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d%d", &x[i], &y[i]);
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(dist(x[i], y[i], x[j], y[j]) > max)
            {
                max = dist(x[i], y[i], x[j], y[j]);
                x_max1 = x[i];
                y_max1 = y[i];
                x_max2 = x[j];
                y_max2 = y[j];
            }
    printf("%d %d\n%d %d\n%f\n", x_max1, y_max1, x_max2, y_max2, max);
    return 0;
}