#include<stdio.h>
#include<stdlib.h>
typedef struct dados Dados;
typedef struct fila Fila;

Fila* inicializarFila();

void filaVazia(Fila* f);

void filaCheia(Fila* f);

Fila* enfileirar(Fila* f, int n);

Fila* desinfileirar(Fila* f);

void topo(Fila* f);

int elimina(Fila* l, int n);

void imprimir(Fila* l);

void imprimiReversa(Fila*l);

void menu();
