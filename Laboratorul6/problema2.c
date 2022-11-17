//
// Created by Eduard Andrei Radu on 10.11.2022.
//


#include <stdio.h>
#include <math.h>

void calc_unghiuri1(float a[], float u[])
{

    u[0] = acos((a[1] * a[1] + a[2] * a[2] - a[0] * a[0]) / (2 * a[1] * a[2])) * (180 / M_PI);
    u[1] = acos((a[0] * a[0] + a[2] *  a[2] - a[1] * a[1]) / (2 * a[0] * a[2])) * (180 / M_PI);
    u[2] = acos((a[1] * a[1] + a[0] * a[0] - a[2] * a[2]) / (2 * a[1] * a[0])) * (180 / M_PI);

}
void calc_unghiuri2(float x, float y, float z, float *u1, float *u2, float *u3)
{
    *u1 = acos((y * y + z * z - x * x) / (2 * y * z)) * (180 / M_PI);
    *u2 = acos((x * x + z * z - y * y) / (2 * x * z)) * (180 / M_PI);
    *u3 = acos((x * x + y * y - z * z) / (2 * x * y)) * (180 / M_PI);
}
int main ()
{
    float x, y, z, a[3], u[3], u1, u2, u3;
    scanf("%f%f%f", &x, &y, &z);
    for(int i = 0; i < 3; i++)
        scanf("%f", &a[i]);
    calc_unghiuri1(a, u);
    calc_unghiuri2(x, y, z, &u1, &u2, &u3);
    for(int i = 0; i < 3; i++)
        printf("%.3f ", u[i]);
    printf("\n");
    printf("%.3f %.3f %.3f\n", u1, u2, u3);
    return 0;
}