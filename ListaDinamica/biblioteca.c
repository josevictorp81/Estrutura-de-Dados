#include "biblioteca.h"

void menu()
{
	printf("\tBiblioteca\n");
	printf(" 1 - Inserir Numero\n");
	printf(" 2 - Buscar Numero\n");
	printf(" 3 - Imprimir Todos os Numeros\n");
	printf(" 4 - Imprimir Tamanho da Lista\n");
	printf(" 5 - Verifica Numeros Par/Impar\n");
	printf(" 6 - Excluir Numero\n");
	printf(" 0 - Sair\n");
}

Dados*criar()
{
	return NULL;
}

Dados*inserir(Dados *list, int num)
{
	Dados*novo = (Dados*)malloc(sizeof(Dados));
	novo->num = num;
	novo->proximo = list;
	return novo;

}
void imprimir(Dados *list)
{
	Dados *i;

	for(i = list; i != NULL; i = i->proximo)
	{
		printf("Numero: %d \n", i->num);
	}

}

Dados *excluir(Dados*list, int num)
{
	Dados *ant = NULL;
	Dados *i = list;
	
	while(i != NULL && i->num == num)
	{
		ant = i;
		i = i->proximo;

	}
	
	if(i == NULL)
	{
		return list;
	}
	if(ant == NULL)
	{
		list = i->proximo;
	}
	else
	{
		ant->proximo = i->proximo;
	}

	free(i);
	printf("Excluido!!!!!\n");
	return list;

}

void verificaParImpar(Dados *list)
{
	Dados *i;
	
	for(i = list; i != NULL; i = i->proximo)
	{
		if(i->num % 2 == 0)
		{
			printf("Numero: %d e Par!\n", i->num);
		}
		else
		{
			printf("Numero: %d e Impar!\n",  i->num);
		}
	}
}

void buscar(Dados *list, int num)
{
	Dados *i;
	
	for(i = list; i != NULL; i = i->proximo)
	{
		if(i->num == num)
		{
			printf("Numero: %d Encontrado!!\n", i->num);
		}
	}
}

int tamanhoLista(Dados *list)
{

	Dados *i;
	int cont = 0;

	if(list == NULL)
	{
		return 0;
	}

	for(i = list; i != NULL; i = i->proximo)
	{
		cont++;
	}

	return cont;
}






