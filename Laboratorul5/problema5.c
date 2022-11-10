//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int factorial(int n) {
  int temp = 1;
  for (int i = 2; i <= n; i++)
    temp *= i;
  return temp;
}
double putere(double x, int n) {
  double temp = 1;
  for (int i = 1; i <= n; i++)
    temp *= x;
  return temp;
}
double taylor(double x, int n) {
  double sum = 0;
  for (int i = 0; i <= n; i++) {
    sum += putere(x, i) / factorial(i);
  }
  return sum;
}

int main() {
  double x;
  int n;

  scanf("%lf%d", &x, &n);

  printf("%0.4lf\n", taylor(x, n));

  return 0;
}
