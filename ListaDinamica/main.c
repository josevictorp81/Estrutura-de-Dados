#include "biblioteca.h"
int main()
{
	struct dados
	{
		int num;
	}numero;
	
	int op, tam;
	Dados *bancoDados;
	
	bancoDados = criar();//chama a funcao criar
	
	//system("color F9");
	do
	{
		menu();//chama menu
		printf(" Escolha uma opcao: ");
		scanf("%d", &op);
		system("cls");//limpar tela
		
		switch(op)
		{
		case 1:
			printf("\tInserir Dados\n");
			printf("Numero: ");
			scanf("%d", &numero.num);
			bancoDados = inserir(bancoDados, numero.num);
			system("pause");
			system("cls");
			break;
		case 2:
			printf("\tBuscar Livro\n");
			printf("Numero: ");
			fflush(stdin);
			scanf("%d", &numero.num);
			getchar();
			buscar(bancoDados, numero.num);
			system("pause");
			system("cls");
			break;
		case 3:
			printf("\tImprimir todos os livros\n");
			imprimir(bancoDados);
			system("pause");
			system("cls");
			break;
		case 4:
			printf("\tImprimir tamanho da lista\n\n");
			tam = tamanhoLista(bancoDados);
			printf("A lista tem: %d numero(s)\n\n", tam);
			system("pause");
			system("cls");
			break;
		case 5:
			printf("\tVerificar Par/Impar\n");
			verificaParImpar(bancoDados);
			system("pause");
			system("cls");
			break;
		case 6:
			printf("\tExcluir\n");
			printf("Numero: ");
			fflush(stdin);
			scanf("%d", &numero.num);
			bancoDados = excluir(bancoDados, numero.num);
			system("pause");
			system("cls");
			break;
		default:
			if(op > 6){
				printf("Esta opcao nao existe!\n");
				system("pause");
				system("cls");
			}
			break;
		}

	}
	while(op != 0);







	return 0;
}
