//
// Created by Eduard Andrei Radu on 10.11.2022.
//

<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
void unghiuri1(double l[], double u[]);
void unghiuri2(double x, double y, double z, double *ux, double *uy, double *uz)
{
    *ux = acos((y * y + z * z - x * x) / (2 * y * z)) * 180 / M_PI;
    *uy = acos((x * x + z * z - y * y) / (2 * x * z)) * 180 / M_PI;
    *uz = acos((y * y + x * x - z * z) / (2 * y * x)) * 180 / M_PI;
}
=======
#include<stdio.h>

>>>>>>> main
int main()
{
    double x, y, z, l[4], u[4], ux, uy, uz;
    scanf("%lf%lf%lf", &x, &y, &z);
    l[0] = x;
    l[1] = y;
    l[2] = z;
    unghiuri1(l, u);
    int i;
    for (i = 0; i < 3; i++)
        printf("%.3lf ", u[i]);
    printf("\n\n\n");
    unghiuri2(x, y, z, &ux, &uy, &uz);
    printf("%.2lf %.2lf %.2lf", ux, uy, uz);

    return 0;
}

void unghiuri1(double l[], double u[])
{
    u[0] = acos((l[1] * l[1] + l[2] * l[2] - l[0] * l[0]) / (2 * l[1] * l[2])) * 180 / M_PI;
    u[1] = acos((l[0] * l[0] + l[2] * l[2] - l[1] * l[1]) / (2 * l[0] * l[2])) * 180 / M_PI;
    u[2] = acos((l[0] * l[0] + l[1] * l[1] - l[2] * l[2]) / (2 * l[0] * l[1])) * 180 / M_PI;
}
