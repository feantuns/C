#include <string.h>
#include <stdio.h>

int main() {

  char txt[80];
  char word[80];
  int tamT, tamW, i = 0, j = 0;

  fgets(txt, 80, stdin);

  scanf("%s", word);

  tamT = 0;

  while(txt[tamT] != '\0' && tamT < 80)
    tamT++;

  tamW = 0;

  while(word[tamW] != '\0' && tamW < 80)
    tamW++;
  
  if (txt[i] == word[j]) {
    
  }

  for (i = 0; i < tamT; i++) {

  }

  printf("%s\n", txt);
}
