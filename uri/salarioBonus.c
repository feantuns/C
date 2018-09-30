/* WHAT IS THE MATTER? */
#include <stdio.h>

int main() {

  char nome[80];
  double sal, vendas, res;

  scanf("%s", &nome);
  scanf("%lf", &sal);
  scanf("%lf", &res);

  res = sal + (res * 15) / 100;

  printf("TOTAL = R$ %.2lf\n", res);
  
  return 0;
}