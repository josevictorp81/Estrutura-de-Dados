#include<stdio.h>
#include<stdlib.h>

typedef struct lista Lista;

typedef struct no Tno;

Lista* criar();

int lista_vazia(Lista* li);

void menu();

int tamanho_lista(Lista* li);

int inserir_inicio(Lista* li, int valor);

int inserir_fim(Lista* li, int valor);

int inserir_posicao(Lista* li, int valor, int posicao);

void imprimir(Lista* li);

int remove_inicio(Lista* li);

int remove_fim(Lista* li);

int remove_posicao(Lista* li, int posicao);

int buscar_valor(Lista* li, int valor);

void liberar_lista(Lista* li);
