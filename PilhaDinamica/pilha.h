#include<stdio.h>
#include<stdlib.h>

typedef struct pilha Pilha;

typedef struct valor Valor;

Pilha* cria();

void menu();

int vazia(Pilha* pi);

int inserir(Pilha* pi, int valor);

void liberar(Pilha* pi);

int tamanho(Pilha* pi);

int topo(Pilha* pi);

int remover(Pilha* pi);

void imprimir(Pilha*pi);