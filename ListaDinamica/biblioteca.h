#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estrutura Dados criada
struct dados
{
	int num;
	struct dados *proximo;
};
typedef struct dados Dados;

//Prototipo das funções
Dados *inserir(Dados*list, int num);
void menu();
Dados *criar();
void imprimir(Dados*list);
int buscar(Dados*list, int num);
Dados *excluir(Dados*list, int num);
void verificaParImpar(Dados *list);
int tamanhoLista(Dados *list);

