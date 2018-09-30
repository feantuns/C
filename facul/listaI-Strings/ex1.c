/* WHAT IS THE MATTER?

     Faça um programa que leia do teclado uma string (possivelmente com espaços) de até 80
caracteres e que então salve a inversa desta string em uma nova string. Refaça o programa
de tal forma que não seja utilizado nenhum vetor adicional! Ou seja, devemos computar a
inversa no próprio vetor original da string lida.

 */
#include <stdio.h>
#include <string.h>

int main() {

  char st[80];
  int i, j, tam1, tam2;
  printf("Entre com o nome: ");
  fgets(st, 80, stdin);

  tam1 = strlen(st) - 1;

  j = tam1;

  for (i = tam1+1; i <= tam1 + tam1; i++) {

    if (st[j] == ' ' || st[j] == '\n' || st[j] == '\0')
      j--;

    st[i] = st[j];
    j--;
  }

  st[tam1 + tam1 + 1] = '\0';

  for (j = 0, i = tam1+1; j <= tam1; j++, i++) {
    if (st[i] == ' ' || st[i] == '\n' || st[i] == '\0')
      i++;

    st[j] = st[i];
  }

  st[tam1 + 1] = '\0';
  printf("%s\n", st);

  return 0;
}