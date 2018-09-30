/* WHAT IS THE MATTER? */
#include <stdio.h>

int main() {

  double A, B, C;
  double pi = 3.14159;
  double tri, cir, ret, tra, qua;

  scanf("%lf %lf %lf", &A, &B, &C);

  tri = (A * C) / 2;
  cir = pi * (C * C);
  tra = ((A + B) * C) / 2;
  qua = B * B;
  ret = A * B;

  printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, cir, tra, qua, ret);

  return 0;
}