/* WHAT IS THE MATTER? */
#include <stdio.h>

int main() {

  int n, i;
  double *v1, *v2, soma = 0;

  scanf("%d", &n);

  v1 = malloc(n*sizeof(double));
  v2 = v1;

  for (i = 0; i < n; i++) 
    scanf("%lf", &v1[i]);
  
  for (i = 0; i < n; i++) 
    scanf("%lf", &v2[i]);

  for (i = 0; i < n; i++) 
    soma += v1[i];
  
  for (i = 0; i < n; i++) 
    soma += v2[i];

  printf("%.2lf\n", soma);  

  return 0;
}