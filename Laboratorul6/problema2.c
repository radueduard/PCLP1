//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include <stdio.h>
#include <math.h>

void f1(float laturi[], float unghiuri[]) {
    float A, B, C;
    A = laturi[0];
    B = laturi[1];
    C = laturi[2];
    unghiuri[0] = acos( (B * B + C * C - A * A) / (2 * B * C) ) * (180 / M_PI);
    unghiuri[1] = acos( (A * A + C * C - B * B) / (2 * A * C) ) * (180 / M_PI);
    unghiuri[2] = acos( (B * B + A * A - C * C) / (2 * B * A) ) * (180 / M_PI);
}

void f2(float A, float B, float C, float *u1, float *u2, float *u3) {
    *u1 = acos( (B * B + C * C - A * A) / (2 * B * C) ) * (180 / M_PI);
    *u2 = acos( (A * A + C * C - B * B) / (2 * A * C) ) * (180 / M_PI);
    *u3 = acos( (B * B + A * A - C * C) / (2 * B * A) ) * (180 / M_PI);
}

int main()
{
    float laturi[3], unghiuri[3];
    scanf("%f%f%f", &laturi[0], &laturi[1], &laturi[2]);
    //f1(laturi, unghiuri);
    f2(laturi[0], laturi[1], laturi[2], &unghiuri[0], &unghiuri[1], &unghiuri[2]);
    printf("%.3f %.3f %.3f\n", unghiuri[0], unghiuri[1], unghiuri[2]);
    return 0;
}