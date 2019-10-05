#include "fila.h"

struct fila
{
	struct valor dados[tam];
	int quant;
	int inicio;
	int fim;
};


void menu()
{
	printf("\tFila Estatica\n");
	printf("1 - Inserir\n");
	printf("2 - Imprimir\n");
	printf("3 - Vazia\n");
	printf("4 - Cheia\n");
	printf("5 - Tamanho\n");
	printf("6 - Primeiro da fila\n");
	printf("7 - Remover\n");
	printf("8 - Liberar\n");
	printf("0 - Sair\n");
}


Fila* cria()
{
	Fila* novo = (Fila*) malloc(sizeof(Fila));//alocando memoria

	if(novo != NULL)
	{
		novo->inicio = 0;
		novo->fim = 0;
		novo->quant = 0;
	}
	return novo;
}


void libera(Fila* fi)
{	
	int i; 
	for( i = 0 ; i < fi->quant; i++)
	{
		fi->dados[i].valor = 0;
	}
	fi = NULL;
	fi->quant = 0;
	printf("Pilha liberada!\n");
}


int tamanho(Fila* fi)
{
	if(fi == NULL){
		return 0;
	}
	return fi->quant;
}


int vazia(Fila* fi)
{
	if(fi == NULL){
		return 0;
	}
	return (fi->quant == 0);
}


int cheia(Fila* fi)
{
	if(fi == NULL){
		return 0;
	}
	return (fi->quant == tam);
}


int inserir(Fila* fi, int valor)
{
	if(fi == NULL)
	{
		return 0;
	}
	if(cheia(fi))
	{
		return 0;
	}

	fi->dados[fi->fim].valor = valor;
	fi->fim = (fi->fim + 1) % tam;
	fi->quant++;
	return 1;
}


void imprimir(Fila* fi)
{
	int i;
	for(i = 0; i < fi->quant; i++)
	{
		printf("Valor: %d\n", fi->dados[i].valor);
	}
}

int remover(Fila* fi)
{
	//Valor* aux;
	if(fi == NULL || vazia(fi)){
		return 0;
	}
	//aux = fi->dados[fi->inicio];
	fi->inicio = (fi->inicio + 1) % tam;
	fi->quant--;
	return 1;
}

int primeiro(Fila* fi){
	if(fi == NULL || vazia(fi)){
		return 0;
	}
	return (fi->dados[fi->inicio].valor);
}
