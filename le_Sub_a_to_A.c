#include <stdio.h>;

int main () {

  char nome[100], aux, txtArq[100];
  char saida[100], aux2, txtSaida[100];
  int i = 0, j = 0;
  FILE * arq;
  FILE * arqSaida;

  scanf("%s", nome);

  arq = fopen(nome, "r");
  if (arq == NULL) {
    printf("Erro ao abrir o arquivo: %s \n", nome); return 1;
  } else {
    while( fscanf(arq, "%c", &aux) != EOF ) {
      if (aux == 'a') 
        txtArq[i] = 'A';
      else 
        txtArq[i] = aux;
      i++;
    }
  }
  fclose(arq);
  txtArq[i] = '\0';
  printf("%s", txtArq);

  printf("\n Entre com o nome do arquivo de saida: \n");
  scanf("%s", saida);
  arqSaida = fopen(saida, "w");
  if (arqSaida == NULL) {
    printf("Erro ao abrir o arquivo: %s \n", saida); return 1;
  }
  else {
    while (j < i) {
      fprintf(arqSaida, "%c", txtArq[j]);
      j++;
    }
  }

  fclose(arqSaida);

}

