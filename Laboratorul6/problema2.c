//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
#include <math.h>
void unghi(float x, float y, float z, float ux, float uy, float uz) {
    float v1, v2, v3;
    v1 = cos((y * y + z * z - x * x) / 2 * y * z);
    v2 = cos((x * x + z * z - y * y) / 2 * x * z);
    v3 = cos((x * x + y * y - z * z) / 2 * x * y);
    ux = acos(cos(x)) * 180 / M_PI;
    uy = acos(cos(y)) * 180 / M_PI;
    uz = acos(cos(z)) * 180 / M_PI;
}
int main() {
    float x, y, z, ux, uy, uz;
    scanf("%f%f%f", &x, &y, &z);
    unghi(x, y, z, ux, uy, uz);
    printf("%.3f %.3f %.3f", ux, uy, uz);
    return 0;
}