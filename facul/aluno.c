/* WHAT IS THE MATTER? */
#include <stdio.h>

struct Aluno {
  int ra;
  float nota;
};

typedef struct Aluno Aluno;

// funcoes lista, apaga, adiciona

void addAluno(struct Aluno turma[5], int ra, float nota, int contador) {

  int i;

  for (i = 0; i <= contador; i++) {

    if (i == contador) {
      turma[i].ra = ra;
      turma[i].nota = nota;
      break;
    }
  }
  
}

void listaAlunos(struct Aluno turma[5], int contador) {

  int i;

  if (contador == 0) 
    printf("Nenhum aluno cadastrado!");
  else
    for (i = 0; i < contador; i++) {

      printf("\nra : %d \t nota: %.2f", turma[i].ra, turma[i].nota);
    }
}

int apagaAluno(struct Aluno turma[5], int ra, int contador) {

  int i = 0;
  int aux = turma[0].ra;
  int encontrado = 0;

  if (contador == 0) 
    printf("Nenhum aluno cadastrado!");
  else{

    if (aux == ra) {
      turma[i].ra = turma[i+1].ra;
      turma[i].nota = turma[i+1].nota;
      encontrado = 1;
    }

    aux = turma[i].ra;

    for (i = 1; i < contador; i++) {
      
      if (turma[i].ra == ra || aux == turma[i].ra) {
        turma[i].ra = turma[i+1].ra;
        turma[i].nota = turma[i+1].nota;
        encontrado = 1;
      }

      aux = turma[i].ra;
    }
  }

  if (encontrado) {
    printf("\naluno apagado\n");
    return contador - 1;
  } else {
    printf("\naluno nao encontrado :|\n");
    return contador;
  }
}

int main() {

  Aluno turma[5];
  int opt = 1;
  int contador = 0;
  int ra, nota;

  // menu opcoes
  while (opt != 0) {

    printf("\n\nselecione a operacao: \n 1 - cadastrar \n 2 - listar \n 3 - apagar\n 0 - sair\n");

    scanf("%d", &opt);

    switch (opt) {
      case 1:
        printf("\nopcao cadastrar selecionada, digite o RA e NOTA\n");
        scanf("%d", &ra);
        scanf("%d", &nota);
        addAluno(turma, ra, nota, contador);
        contador++;
        break;
      case 2:
        printf("\nopcao listar selecionada\n");
        listaAlunos(turma, contador);
        break;
      case 3:
        printf("\nopcao apagar selecionada, digite o RA do aluno\n");
        scanf("%d", &ra);
        contador = apagaAluno(turma, ra, contador);
        break;
      case 0:
        return 0;
        break;
      default:
        break;
    }
  }


  return 0;
}
