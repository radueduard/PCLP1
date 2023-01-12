<<<<<<< HEAD
#include <math.h>
#include <stdio.h>
=======
//
// Created by Eduard Andrei Radu on 10.11.2022.
//

#include<stdio.h>
>>>>>>> main

void triangle_angles(float a[3], float b[3]) {
  b[0] =
      acosf((pow(a[1], 2) + pow(a[2], 2) - pow(a[0], 2)) / (2 * a[1] * a[2])) *
      (180.0 / M_PI);
  b[1] =
      acosf((pow(a[0], 2) + pow(a[2], 2) - pow(a[1], 2)) / (2 * a[0] * a[2])) *
      (180.0 / M_PI);
  b[2] = acosf(pow(a[0], 2 + pow(a[1], 2) - pow(a[2], 2)) / (2 * a[0]) * a[1]) *
         (180.0 / M_PI);
}

int main() {
  float sides[3], angles[3];
  scanf("%f%f%f", &sides[0], &sides[1], &sides[2]);

  triangle_angles(sides, angles);

  printf("%.3f %.3f %.3f\n", angles[0], angles[1], angles[2]);
  return 0;
}