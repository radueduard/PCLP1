//
// Created by Eduard Andrei Radu on 10.11.2022.
//

<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
=======
#include<stdio.h>
>>>>>>> main

void unghiuri(float lat[], float ung[]) {
    ung[0] = acos((lat[0] * lat[0] + lat[1] * lat[1] - lat[2] * lat[2]) / (2 * lat[1] * lat[0])) * (180 / M_PI);
    ung[1] = acos((lat[1] * lat[1] + lat[2] * lat[2] - lat[0] * lat[0]) / (2 * lat[1] * lat[2])) * (180 / M_PI);
    ung[2] = acos((lat[0] * lat[0] + lat[2] * lat[2] - lat[1] * lat[1]) / (2 * lat[2] * lat[0])) * (180 / M_PI);
}

int main() {
    float l[100], u[100];
    for(int i = 0; i < 3; i++)
        scanf("%f", &l[i]);
    unghiuri(l ,u);
    for(int i = 0; i < 3; i++)
        printf("%.3f ", u[i]);
    return 0;
}