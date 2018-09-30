/* WHAT IS THE MATTER? */
#include <stdio.h>

int main() {

  int n, hr;
  double sal;

  scanf("%d", &n);
  scanf("%d", &hr);
  scanf("%lf", &sal);

  printf("NUMBER = %d\n", n);
  printf("SALARY = U$ %.2lf\n", hr * sal);

  return 0;
}