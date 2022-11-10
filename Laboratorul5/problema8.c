//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int sortare_coordonate_si_aflare_latura(int * p)
{
    for(int i = 1; i < 4; i++)
        for(int j = i + 1; j <= 4; j++)
            if(p[i] > p[j])
            {
                int aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
    if(p[1] < p[2] && p[2] < p[3] && p[3] < p[4])
        return p[3] - p[2];
    if(p[1] < p[2] && p[2] < p[3] && p[3] == p[4])
        return p[4] - p[2];
    if(p[1] == p[2] && p[2] < p[3] && p[3] < p[4])
        return p[3] - p[1];
    if(p[1] == p[2] && p[2] < p[3] && p[3] == p[4])
        return p[3] - p[2];
}

int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21, int x22, int y22)
{
    if(y12 >= y21 || y22 >= y11 || x12 <= x21 || x22 <= x11) return 0;
    int x[5], y[5];
    x[1] = x11;
    x[2] = x12;
    x[3] = x21;
    x[4] = x22;
    y[1] = y11;
    y[2] = y12;
    y[3] = y21;
    y[4] = y22;
    int latura_Ox = sortare_coordonate_si_aflare_latura(x);
    int latura_0y = sortare_coordonate_si_aflare_latura(y);
    return latura_0y * latura_Ox;
}

int main() {
    int x11, y11, x12, y12, x21, y21, x22, y22;
    scanf("%d%d%d%d%d%d%d%d", &x11, &y11, &x12, &y12, &x21, &y21, &x22, &y22);
    printf("%d\n", arie_intersectie(x11, y11, x12, y12, x21, y21, x22, y22));
    return 0;
}