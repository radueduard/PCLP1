//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}

int min(int a, int b)
{
    if(a < b)
        return a;
    return b;
}

int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21, int x22, int y22)
{
    int l, L, x_left, x_right, y_left, y_right;
    x_left = max(x11, x21);
    x_right = min(x12, x22);
    if(x_left > x_right)
        L = 0;
    else
        L = x_right - x_left;
    y_left = min(y11, y21);
    y_right = max(y12, y22);
    if(y_right > y_left)
        l = 0;
    else
        l = y_left - y_right;
    return l * L;
}
int main()
{
    int x11, y11, x12, y12, x21, y21, x22, y22;
    scanf("%d%d%d%d%d%d%d%d", &x11, &y11, &x12, &y12, &x21, &y21, &x22, &y22);
    printf("%d\n", arie_intersectie(x11, y11, x12, y12, x21, y21, x22, y22));
    return 0;
}