/* WHAT IS THE MATTER? */
#include <stdio.h>
#include <string.h>

int main() {

  char st[80], stInv[80], stE[80], stInvE[80];
  int tam, i, j;
  int palindromo = 1;
  printf("Entre com a string (max. 79): ");
  fgets(st, 80, stdin);
  // scanf("%s",st);
  //Determinamos o tamanho da string, que é o valor em tam no final do laço
  //Depois escrevemos
  tam = strlen(st);
  stInv[tam] = '\0';
  j = tam-1;
  i = 0;
  while(i<tam){
    stInv[j] = st[i];
    i++;
    j--;
  }
  printf("A inversa e: %s\n",stInv);


  tam = strlen(st);
  stInvE[tam] = '\0';
  j = tam-1;
  i = 0;
  while(i<tam){
    if (st[i] == ' ' || st[i] == '\n' || st[i] == '\0') {
      printf("PAU\n");
    } else {
      stInvE[j] = st[i];
      j--;
    }
    i++;
  }

  stE[tam] = '\0';
  j = 0;
  i = 0;
  while(i<tam){
    if (st[i] == ' ' || st[i] == '\n' || st[i] == '\0') {
      printf("PAU\n");
    } else {
      stE[j] = st[i];
      j++;
    }
    i++;
  }

  for (i = 0; i < tam; i++) {

    if (stInvE[i] != stE[i])
      palindromo = 0;
  }

  if (palindromo) 
    printf("A string %s e um palindromo!!", stE);
  else 
    printf("A string %s nao e um palindromo :(\n", stE);

  return 0;
}
