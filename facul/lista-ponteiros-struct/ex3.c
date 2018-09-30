#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct Pessoa{
	int rg;
	int cpf;
	char nome[80];
}Pessoa;
typedef struct Base{
	int armazenado; //Deve sempre corresponder ao número de pessoas na base
	Pessoa pessoas[100];
}Base;

Base cria_base() {
	Base base;
	base.armazenado = 0;
	return base;
}

int insere_pessoa(Pessoa p, Base bases[], int pos) {
	// verificar se pode ser incluido
	// 0 - ta cheio
	// -1 - ja existe
	// 1 - deu bom
	
	int i;
	
	if (bases[pos].armazenado == 100) 
		return 0;
	else {
//		if (base.armazenado == 0) {
//			base.pessoas[0].rg = p.rg;
//			base.pessoas[0].cpf = p.cpf;
//			strcpy(base.pessoas[0].nome, p.nome);
//			base.armazenado++;
//			return 1;
//		} else {
			// verifica se existe igual	
			int qtd = bases[pos].armazenado;	
			for (i = 0; i < qtd; i++) 
				if (p.rg == bases[pos].pessoas[i].rg) 
					return -1;
					
			bases[pos].pessoas[qtd].rg = p.rg;
			bases[pos].pessoas[qtd].cpf = p.cpf;
			strcpy(bases[pos].pessoas[qtd].nome, p.nome);
			bases[pos].armazenado+=1;
			return 1;
//		}
		
			
		
	}
}

int main () {
	
	Base bases[MAX];
	
	int escolha = 10;
	int rg, cpf;
	char nome[80];
	int i = 0;
	
	while (escolha != 0) {
		
		printf("Escolha uma operacao: \n 1 - Cria base\n 2 - Inclui Pessoa\n 3 - Exclui Pessoa\n 0 - Sair\n");
		scanf("%d", &escolha);
		
		switch (escolha) {
			case 1: // Cria base
				bases[i] = cria_base();
				i++;
				printf("Base criada!\n\n");
				break;
			case 2: // Inclui Pessoa
				if (i == 0) 
					printf("Crie uma base antes de incluir pessoas!\n\n");
				else {
					printf("Inclui Pessoa");
					// Recebendo dados
					printf("\n RG: ");
					scanf("%d", &rg);
					printf("\n CPF: ");
					scanf("%d", &cpf);
					printf("\n NOME: ");
					scanf(" %s", &nome);
					
					// Criando registro
					Pessoa pessoa;
					pessoa.rg = rg;
					pessoa.cpf = cpf; 
					strcpy(pessoa.nome, nome);
					
					printf("%d\n", insere_pessoa(pessoa, bases, i-1));

					int j;

					for (j = 0; j < bases[i-1].armazenado; j++) {
						printf("\n\n%d %d %s\n", bases[i-1].pessoas[j].rg, bases[i-1].pessoas[j].cpf, bases[i-1].pessoas[j].nome);
					}
					i++;
					break;
				}
				break;
			case 3: // Exclui Pessoa
				break;
			case 0:
				printf("Adios!\n");
				break;
			default:
				printf("Opcao invalida!\n");
				break;
		}
	}
}
