/*  Suponha que criamos uma estrutura para armazenar produtos de um supermercado:

typedef struct Produto{
  char nome[80];
  double preco;
  int quantidade;
}Produto;

Implemente duas funções, uma que devolve o vetor ordenado por preços e outra que devolve
o vetor ordenado pela quantidade de itens no estoque. Os protótipos são:
void ordenaPreco(Produto vet[], int n);
void ordenaQuant(Produto vet[], int n); */
#include <stdio.h>
#include <string.h>
#define MAX 50

struct Produto{
  char nome[80];
  double preco;
  int quantidade;
};

typedef struct Produto Produto;

void ordenaPreco(Produto vet[], int n);
// void ordenaQuant(Produto vet[], int n);

int main() {

  Produto vet[MAX];
  int i, n;

  // numero de produtos
  printf("numero de produtos\n");
  scanf("%d", &n);

  // cadastro produtos
  printf("ordem de entrada: nome preco quantidade\n");
  for (i = 0; i < n; i++) {
    scanf("%s", vet[i].nome);
    scanf("%lf", &vet[i].preco);
    scanf("%d", &vet[i].quantidade);
  }

  ordenaPreco(vet, n);
  ordenaQuant(vet, n);

  return 0;
}

void ordenaPreco(Produto vet[], int n) {

  Produto aux;
  int i, j;

  for (i = 0; i < n; i++) {

    aux = vet[i];

    for (j = 0; j < n; j++) {
      if (aux.preco < vet[j].preco) {
        vet[i] = vet[j];
        vet[j] = aux;
        aux = vet[i];
      }
    }
  }

  printf("Vetor ordenado por PRECO\n");

  for (i = 0; i < n; i++) {
    printf("%s %.2lf %d\n", vet[i].nome, vet[i].preco, vet[i].quantidade);
  }
  
};

void ordenaQuant(Produto vet[], int n) {

  Produto aux;
  int i, j;

  for (i = 0; i < n; i++) {

    aux = vet[i];

    for (j = 0; j < n; j++) {

      if (aux.quantidade < vet[j].quantidade) {
        vet[i] = vet[j];
        vet[j] = aux;
        aux = vet[i];
      }
    }
  }

  printf("Vetor ordenado por QUANTIDADE\n");

  for (i = 0; i < n; i++) {
    printf("%s %.2lf %d\n", vet[i].nome, vet[i].preco, vet[i].quantidade);
  }
};

