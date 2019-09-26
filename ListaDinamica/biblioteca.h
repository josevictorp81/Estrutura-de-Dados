#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct dados
{
	int num;
	struct dados *proximo;
};
typedef struct dados Dados;

Dados *inserir(Dados*list, int num);
void menu();
Dados *criar();
void imprimir(Dados*list);
void buscar(Dados*list, int num);
Dados *excluir(Dados*list, int num);
void verificaParImpar(Dados *list);
int tamanhoLista(Dados *list);

