#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2)
{
    float d;
    d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return d;
}
int main()
{
    int n, i, j, x[100], y[100], x1, y1, x2, y2;
    float d, d_max = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d%d", &x[i], &y[i]);
    for (i = 1; i < n; i++)
        for (j = i + 1; j <= n; j++)
        {
            d = dist(x[i], y[i], x[j], y[j]);
            if (d > d_max)
            {
                d_max = d;
                x1 = x[i];
                y1 = y[i];
                x2 = x[j];
                y2 = y[j];
            }
        }
    printf("%d %d\n%d %d\n%f\n", x1, y1, x2, y2, d_max);
}