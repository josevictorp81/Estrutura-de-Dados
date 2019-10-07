#include "pilha.h"

struct valor
{
	int valor;
	struct valor* ant;
};
// pilha
struct pilha
{
	Valor *topo;
	int tam;
};

void menu(){
	printf("\tPilha Dinamica\n");
	printf("1 - Inserir\n");
	printf("2 - Imprimir\n");
	printf("3 - Vazia\n");
	printf("4 - Tamanho\n");
	printf("5 - Topo\n");
	printf("6 - Remover\n");
	printf("7 - Liberar\n");
	printf("0 - Sair\n");
}

Pilha* cria(){
	Pilha* novo = (Pilha*) malloc(sizeof(Pilha));
	
	if(novo != NULL){
		novo->topo = NULL;
		novo->tam = 0;
	}
	return novo;
}

int vazia(Pilha* pi){
	
	if(pi->topo == NULL){
		return 1;
	}
	return 0;
}

void liberar(Pilha* pi){
	Valor* aux = NULL;
	Valor* i;
	if(!vazia(pi)){
		i = pi->topo;
		while(i != NULL)
		{
			i = i->ant;
			free(i);
			i = aux;
		}
	}
	free(pi);
	pi = cria();
	printf("Pilha liberada!\n");
}

int tamanho(Pilha* pi){
	return pi->tam;
}

int topo(Pilha* pi){
	if(!vazia(pi)){
		return pi->topo->valor;	
	}
	return 0;
}

int inserir(Pilha* pi, int valor){
	Valor* novo = (Valor*) malloc(sizeof(Valor));
	if(novo != NULL){
		novo->valor = valor;
		novo->ant = pi->topo;
		pi->topo = novo;
		pi->tam++;
		return 1;
	}
	return 0;
}

int remover(Pilha* pi){
	Valor* aux;
	
	if(!vazia(pi)){
		aux = pi->topo;
		pi->topo = pi->topo->ant;
		free(aux);
		pi->tam--;
		return aux->valor;
	}
	return 0;
}

void imprimir(Pilha*pi){
	Valor *i = pi->topo;
	while(i != NULL){
		printf("Valor: %d\n",i->valor);
		i = i->ant;
	}
}