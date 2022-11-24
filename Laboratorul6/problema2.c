//
// Created by Eduard Andrei Radu on 10.11.2022.
//

<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
=======
#include<stdio.h>
>>>>>>> main

void metoda_1(double * arr_laturi, double * arr_unghiuri)
{
    arr_unghiuri[0] = (180 / M_PI) * (acos((arr_laturi[1] * arr_laturi[1] + arr_laturi[2] * arr_laturi[2] - arr_laturi[0] * arr_laturi[0]) / (2 * arr_laturi[1] * arr_laturi [2])));
    arr_unghiuri[1] = (180 / M_PI) * (acos((arr_laturi[0] * arr_laturi[0] + arr_laturi[2] * arr_laturi[2] - arr_laturi[1] * arr_laturi[1]) / (2 * arr_laturi[0] * arr_laturi [2])));
    arr_unghiuri[2] = (180 / M_PI) * (acos((arr_laturi[1] * arr_laturi[1] + arr_laturi[0] * arr_laturi[0] - arr_laturi[2] * arr_laturi[2]) / (2 * arr_laturi[1] * arr_laturi [0])));
}

void metoda_2(double * x, double * y, double * z, double * u1, double * u2, double * u3)
{
    double a = * x, b = * y, c = * z;
    * u1 = (180 / M_PI) * (acos((b * b + c * c - a * a) / (2 * b * c)));
    * u2 = (180 / M_PI) * (acos((a * a + c * c - b * b) / (2 * a * c)));
    * u3 = (180 / M_PI) * (acos((b * b + a * a - c * c) / (2 * b * a)));
}

int main() {
    double arr_laturi[3], arr_unghiuri[3], x, y, z, u1, u2, u3;

    scanf("%lf%lf%lf", &x, &y, &z);
    arr_laturi[0] = x;
    arr_laturi[1] = y;
    arr_laturi[2] = z;

    metoda_1(arr_laturi, arr_unghiuri);
    metoda_2(&x, &y, &z, &u1, &u2, &u3);

    /* printf("%0.3lf %0.3lf %0.3lf\n", u1, u2, u3); */

    for(int i = 0; i <= 2; i++)
        printf("%0.3lf ", arr_unghiuri[i]);
    printf("\n");
    return 0;
}