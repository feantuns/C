#include <stdio.h>
#include <string.h>

struct Coordenada {
  float x;
  float y;
};

void imprimiPonto(struct Coordenada pos[5], int ponto) {

  printf("x: %.2f, y: %.2f\n", pos[ponto].x, pos[ponto].y);
}

void soma(struct Coordenada pos[5], int p1, int p2) {

  struct Coordenada res;

  res.x = pos[p1].x + pos[p2].x;

  res.y = pos[p1].y + pos[p2].y;

  printf("soma.x %.2f | soma.y %.2f", res.x, res.y);
 
}

int main()
{
  /* code */

  struct Coordenada pos[5];
  int i;
  int ponto;
  int p1, p2;

  for (i = 0; i < 5; i++) {

    scanf("%f", &pos[i].x);
    scanf("%f", &pos[i].y);

  }

  for (i = 0; i < 5; i++) {

    printf("x: %.2f, y: %.2f\n", pos[i].x, pos[i].y);

  }

  printf("Posicao para mostrar ponto: \n");

  scanf("%d", &ponto);

  ponto -= 1;

  imprimiPonto(pos, ponto);

  printf("\nPosicoes para somar: \n");

  scanf("%d", &p1);
  scanf("%d", &p2);

  soma(pos, p1+1, p2+1);

  return 0;
}


