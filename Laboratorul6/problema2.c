//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <math.h>
#include <stdio.h>

void triangle_angles(float a , float b, float c, float m[3]) {
    m[0] = acosf((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c)) * (180.0 / M_PI);
    m[1] = acosf((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c)) * (180.0 / M_PI);
    m[2] = acosf((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b)) * (180.0 / M_PI);
}

int main() {
    float x, y, z, angles[3];
    scanf("%f%f%f", &x, &y, &z);

    triangle_angles(x , y , z, angles);

    printf("%.3f %.3f %.3f\n", angles[0], angles[1], angles[2]);
    return 0;
}