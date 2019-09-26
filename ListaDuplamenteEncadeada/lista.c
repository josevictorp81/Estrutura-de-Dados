#include "lista.h"

struct no
{
	int valor;
	struct no* ant;
	struct no* prox;
};

struct lista
{
	Tno *ini;
	Tno *fim;
};

Lista* criar()
{
	Lista *novo = (Lista*)malloc(sizeof(Lista));
	if(novo == NULL)
	{
		printf("Erro na criacao da lista!\n");
		return 0;
	}
	else
	{
		novo->ini = NULL;
		novo->fim = NULL;
		return novo;
	}
}

int lista_vazia(Lista* li)
{
	if(li->ini == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void menu()
{
	printf("\n\tLista Duplamente Encadeada\n\n");
	printf("1 - Lista Vazia\n");
	printf("2 - Tamanho Lista\n");
	printf("3 - Inserir Inicio\n");
	printf("4 - Inserir Fim\n");
	printf("5 - Inserir Posicao\n");
	printf("6 - Buscar Valor\n");
	printf("7 - Imprimir\n");
	printf("8 - Remover Inicio\n");
	printf("9 - Remover Fim\n");
	printf("10 - Remover Valor\n");
	printf("11 - Liberar Lista\n");
	printf("0 - Sair\n");
}

int tamanho_lista(Lista* li)
{
	Tno* aux = li->ini;
	int cont = 0;
	while(aux != NULL)
	{
		aux = aux->prox;
		cont++;
	}
	return cont;
}

int inserir_inicio(Lista* li, int valor)
{
	if(li == NULL)
	{
		return 0;
	}
	Tno* novo = (Tno*)malloc(sizeof(Tno));
	novo->valor = valor;
	novo->ant = NULL;
	novo->prox = li->ini;

	if(li->ini == NULL)
	{
		li->fim = novo;
	}
	else
	{
		li->ini->ant = novo;
	}

	li->ini = novo;
	return 1;
}

int inserir_fim(Lista* li, int valor)
{
	if(li == NULL)
	{
		return 0;
	}

	Tno* novo = (Tno*)malloc(sizeof(Tno));
	if(novo != NULL)
	{
		novo->valor = valor;
		novo->prox = NULL;
		novo->ant = li->fim;
	}
	if(li->ini == NULL)
	{
		li->ini = novo;
	}
	else
	{
		li->fim->prox = novo;
	}
	li->fim = novo;
	return 1;
}

int inserir_posicao(Lista* li, int valor, int posicao)
{
	if(li == NULL)
	{
		return 0;
	}
	if(li != NULL)
	{
		Tno* novo = (Tno*)malloc(sizeof(Tno));

		if(novo != NULL)
		{
			novo->valor = valor;

			if(posicao == 0)
			{
				novo->prox = li->ini;
				li->ini->ant = novo;
				li->ini = novo;
			}
			else
			{
				Tno* aux = li->ini;
				int i;
				for(i = 0; i < posicao; i++)
				{
					if(aux != li->fim)
					{
						aux = aux->prox;
					}
					else
					{
						return 0;
					}
				}

				novo->prox = aux;
				novo->ant = aux->ant;
				aux->ant->prox = novo;
				aux->ant = novo;
			}
			return 1;
		}
	}
	return 1;
}

int remove_inicio(Lista* li)
{
	if(li == NULL)
	{
		return 0;
	}
	if(li != NULL)
	{
		Tno* aux = li->ini;

		if(li->ini == li->fim)
		{
			li->ini = NULL;
			li->fim = NULL;
		}
		else
		{
			li->ini->prox->ant = NULL;
			li->ini = li->ini->prox;
		}
		free(aux);
		return 1;
	}
	return 1;
}

int remove_fim(Lista* li)
{
	if(li == NULL)
	{
		return 0;
	}
	if(li != NULL)
	{
		Tno* aux = li->fim;

		if(li->ini == li->fim)
		{
			li->ini = NULL;
			li->fim = NULL;
		}
		else
		{
			li->ini->ant->prox = NULL;
			li->fim = li->fim->ant;
		}
		free(aux);
		return 1;
	}
	return 1;
}

int remove_posicao(Lista* li, int posicao)
{
	if(li == NULL)
	{
		return 0;
	}
	if(li != NULL)
	{
		Tno* aux = li->ini;

		int i;
		for(i = 0; i < posicao; i++)
		{
			if(aux != li->fim)
			{
				aux = aux->prox;
			}
			else
			{
				return 0;
			}
		}

		if(aux == li->ini)
		{
			li->ini = aux->prox;
		}
		else
		{
			aux->ant->prox = aux->prox;
		}

		if(aux == li->fim)
		{
			li->fim = aux->ant;
		}
		else
		{
			aux->prox->ant = aux->ant;
		}

		free(aux);
		return 1;
	}
	return 1;
}

void imprimir(Lista* li)
{
	Tno* aux = li->ini;
	int cont = 0;
	while(aux != NULL)
	{
		printf("Posicao: %d = Numero: %d\n", cont, aux->valor);
		cont++;
		aux = aux->prox;
	}
}

int buscar_valor(Lista* li, int valor)
{
	Tno* aux;
	for(aux = li->ini; aux != NULL; aux = aux->prox){
	 if(aux->valor == valor){
	 	return aux->valor;
	 }
	}
	return 0;
}

void liberar_lista(Lista* li)
{
	if(li != NULL)
	{
		Tno* aux1 = li->ini;

		Tno* aux2;
		while(aux1 != NULL)
		{
			aux2 = aux1;
			aux1 = aux1->prox;
			free(aux2);
		}
	}
	li->ini = NULL;
	li->fim = NULL;
	printf("Lista Liberada!\n\n");
}
