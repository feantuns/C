/* WHAT IS THE MATTER? */
#include <stdio.h>
#include <string.h>

void strcatH(char *s1, char *s2, char *sres){
  s1 = 'ROLA';
};

int main() {

  char sres[80], s1[40], s2[40];
  char *p1, *p2, *p3;

  scanf(" %s", &s1);
  scanf(" %s", &s2);

  p1 = s1;
  p2 = s2;
  p3 = sres;

  strcatH(p1, p2, p3);

  printf("%s %s", s1, s2);
  return 0;
}