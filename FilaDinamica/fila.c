#include"fila.h"
struct dados
{
	int elemento;
	struct dados *proximo;
};
struct fila
{
	Dados *inicio;
	Dados *fim;
};

Fila* inicializarFila()
{
	Fila* f;
	f = (Fila*)malloc(sizeof(Fila));
	f->inicio = f->fim = NULL;
	return f;
}

void filaVazia(Fila* f)
{
	if(f->fim == NULL && f->inicio == NULL){
		printf("Fila vazia\n");
	}	
	else{
		printf("Fila nao vazia\n");
	}
}

void filaCheia(Fila* f)
{
	if(f->inicio != NULL && f->fim != NULL){
		printf("Fila cheia\n");
	}	
	else{
		printf("Fila nao esta cheia\n");
	}
}

Fila* enfileirar(Fila* f, int n)
{
	Dados *p;
	p = (Dados*)malloc(sizeof(Dados));
	p->elemento = n;
	p->proximo = NULL;
	if(f->inicio != NULL){
		f->fim->proximo = p;
	}	
	else{
		f->inicio = p;
	}
	f->fim = p;
}

//apagar fila
Fila* desinfileirar(Fila* f)
{
	Dados *aux = f->inicio;
	Dados *aux2 = NULL;
	while(aux != NULL)
	{
		aux2 = aux->proximo;
		free(aux);
		aux = aux2;
	}
	f->fim = NULL;
	printf("Fila liberada\n");
	return inicializarFila();
}

void topo(Fila *f)
{
	printf("\nTopo = %d\n\n", f->inicio->elemento);
}

//apagar elemento
int elimina(Fila*l, int n)
{
	Dados *aux;
	aux = l->inicio;
	int resp;
	resp = 0;
	while(aux != NULL)
	{
		if(aux->elemento  == n)
		{
			resp = 1;
			break;
		}
		aux = aux->proximo;

	}
	if(resp)
	{
		aux = l->inicio;
		Dados * aux2;
		while(aux != NULL)
		{
			if(aux->elemento == n)
			{
				aux2 = aux->proximo;
				free(aux);
				aux = aux2;
				break;
			}
			else
			{
				aux2 = aux->proximo;
				free(aux);
				aux = aux2;
			}
		}
		l->inicio = aux;
	}
	else
	{
		printf("Numero nao encontrado.\n\n");
		return 0;
	}
	
	return 1;
}

void imprimir(Fila*l)
{
	Dados *aux = l->inicio;
	printf("---IMPRIMINDO---\n\n");
	while(aux != NULL)
	{
		printf("Elemento :%d\n", aux->elemento);
		printf("___________________________\n");
		aux = aux->proximo;
	}


}

void imprimiReversa(Fila*l){
	Dados *aux = l->fim;
	printf("---IMPRIMINDO REVERSA---\n\n");
	while(aux != l->inicio)
	{
		printf("Elemento :%d\n", aux->elemento);
		printf("___________________________\n");
		aux = aux->proximo;
	}
}

void menu(){
	printf("\tOpcoes\n\n");
	printf("1 ---------Enfileirar\n");
	printf("2----------Fila vazia\n");
	printf("3----------Fila cheia\n");
	printf("4-------------Imprimi\n");
	printf("5-----Imprimi reversa\n");
	printf("6-----------Fila topo\n");
	printf("7-------------Elimina\n");
	printf("8-------Desenfileirar\n");
	printf("0----------------Sair\n");
	printf("Opcao: ");		
}