/* WHAT IS THE MATTER? */
#include <stdio.h>

int main() {

  int a[5] = {1, 2, 3, 4, 5};
  int *b, i;

  b = a;
  printf("Conteudo de b: ");

  for (i = 0; i < 5; i++) {
    printf("%d", b[i]);
    b[i] = i * i;
  }

  printf("\n Conteudo de a: ");
  for (i = 0; i < 5; i++) {
    printf("%d, ", a[i]);
  }

  return 0;
}