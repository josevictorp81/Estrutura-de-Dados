#include<stdio.h>
#include<stdlib.h>
#define tam 100

struct valor
{
	int valor;
};

typedef struct fila Fila;

Fila* cria();

void menu();

void libera(Fila* fi);

int tamanho(Fila* fi);

int vazia(Fila* fi);

int inserir(Fila* fi, int valor);

int cheia(Fila* fi);

int remover(Fila* fi);

void imprimir(Fila* fi);

int primeiro(Fila* fi);