#include <stdio.h>

int main () {

  char nome[100], aux, txtArq[100];
  FILE * arq;
  int caracteres = 0, linhas = 1, palavras = 0, i = 0;

  scanf("%s", nome);

  arq = fopen(nome, "r");
  if (arq == NULL) {
    printf("Erro ao abrir o arquivo: %s \n", nome); return 1;
  } else {
    while( fscanf(arq, "%c", &aux) != EOF ) {
      int dec = aux;
      
      if (dec == 10) 
        linhas++;
      else if (dec != 32) 
        caracteres++;

      txtArq[i] = aux;
      i++;

      printf("%d\n", dec);
    }
  }
  fclose(arq);

  int tam = i;
  int ant = txtArq[0];
  int atu;
  for (i = 1; i < tam; i++) {

    atu = txtArq[i];

    if (atu == 32 || atu == 10) {
      if (ant != 32)
        palavras++;
    }

    ant = atu;
  }

  int aux2;
  for (i = 0; i < tam; i++) {
    aux2 = txtArq[i];
    if (aux2 >= 30 && aux2 <= 39) {
      
    }
  }

  printf("linhas: %d\ncaracteres: %d\npalavras: %d\n", linhas, caracteres, palavras);

}