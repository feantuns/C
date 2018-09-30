/* WHAT IS THE MATTER? */
#include <stdio.h>
#include <string.h>

int main() {

  char st[80];
  int i, j, tam, spaces = 0;
  printf("Entre com o texto: ");
  fgets(st, 80, stdin);

  tam = strlen(st) - 1;

  j = 0;

  for (i = tam+1; i <= tam + tam; i++) {

    if (j > tam)
      break;

    if (st[j] == ' ' || st[j] == '\n' || st[j] == '\0') 
    {
      if (st[j] == ' ')
        spaces++;
      j++;
    }

    st[i] = st[j];
    j++;
  }

  st[tam + tam] = '\0';

  for (j = 0, i = tam+1; j <= tam; j++, i++) {
    if (st[i] == ' ' || st[i] == '\n' || st[i] == '\0')
      i++;

    st[j] = st[i];
  }

  st[tam - spaces] = '\0';
  printf("%s\n%d", st, spaces);

  return 0;
}