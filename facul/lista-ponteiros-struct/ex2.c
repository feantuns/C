#include <stdio.h>
#define MAX 50

typedef struct Data {
  int dia;
  int mes;
  int ano;
} Data;

typedef struct Campo {
  char campo[MAX];
} Campo;

void ordena(struct Data vet[], int tam);

int main() {

  int tam, i;
  Data vet[MAX];

  scanf("%d", &tam);
  for (i = 0; i < tam; i++) {
    scanf("%d %d %d", &vet[i].dia, &vet[i].mes, &vet[i].ano);
  }

  ordena(vet, tam);

  return 0;
}

void ordena(struct Data vet[], int tam) {

  Data aux;
  int i, j;
  
  for (i = 0; i < tam; i++) {

    aux = vet[i];

    for (j = 0; j < tam; j++) {

      if (aux.ano < vet[j].ano) {
        vet[i] = vet[j];
        vet[j] = aux;
        aux = vet[i];
      }
    }
  }

  for (i = 0; i < tam; i++) {

    aux = vet[i];

    for (j = 0; j < tam; j++) {

      if (aux.mes < vet[j].mes) {
        vet[i] = vet[j];
        vet[j] = aux;
        aux = vet[i];
      }
    }
  }

  for (i = 0; i < tam; i++) {

    aux = vet[i];

    for (j = 0; j < tam; j++) {

      if (aux.dia < vet[j].dia) {
        vet[i] = vet[j];
        vet[j] = aux;
        aux = vet[i];
      }
    }
  }

  for (i = 0; i < tam; i++) {
    printf("%d/%d/%d \n", vet[i].dia, vet[i].mes, vet[i].ano);
  }
}