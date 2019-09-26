#include "lista.h"

int main(int argc, char** argv)
{
	Lista* listaDados;

	int op, aux, valor, pos;

	listaDados = criar();

	do
	{
		menu();
		printf("Opcao: ");
		scanf("%d", &op);
		system("cls");

		switch(op)
		{
		case 1:
			printf("\n\tLista Vazia\n");
			aux = lista_vazia(listaDados);
			if(aux == 0) printf("\nLista nao esta vazia!\n\n");
			else printf("\nLista vazia!\n\n");
			system("pause");
			system("cls");
			break;
		case 2:
			printf("\n\tTamanho Lista\n");
			aux = tamanho_lista(listaDados);
			printf("\nA lista tem > %d < valores!\n\n", aux);
			system("pause");
			system("cls");
			break;
		case 3:
			printf("\n\tInserir Inicio\n");
			printf("Valor: ");
			fflush(stdin);
			scanf("%d", &valor);
			aux = inserir_inicio(listaDados, valor);
			if(aux == 0) printf("Erro ao inserir no inicio!\n");
			else printf("\nValor inserido!\n");
			system("pause");
			system("cls");
			break;
		case 4:
			printf("\n\tInserir Fim\n");
			printf("\nValor: ");
			fflush(stdin);
			scanf("%d", &valor);
			aux = inserir_fim(listaDados, valor);
			if(aux == 0) printf("Erro ao inserir no final!\n");
			else printf("\nValor inserido!\n");
			system("pause");
			system("cls");
			break;
		case 5:
			printf("\n\tInserir Posicao\n");
			printf("Valor: ");
			fflush(stdin);
			scanf("%d", &valor);
			printf("Posicao: ");
			fflush(stdin);
			scanf("%d", &pos);
			aux = inserir_posicao(listaDados, valor, pos);
			if(aux == 0) printf("Erro ao inserir por posicao!\n");
			else printf("\nValor Inserido!\n");
			system("pause");
			system("cls");
			break;
		case 6:
			printf("\n\tBuscar Valor\n");
			printf("Valor: ");
			fflush(stdin);
			scanf("%d", &valor);
			aux = buscar_valor(listaDados, valor);
			if(aux == 0) printf("Valor %d nao encontado!\n", aux);
			else printf("\nValor %d encontrado!\n", aux);
			system("pause");
			system("cls");
			break;
		case 7:
			printf("\n\tImprimindo todos os valores da lista\n");
			imprimir(listaDados);
			system("pause");
			system("cls");
			break;
		case 8:
			printf("\n\tRemover Inicio\n");
			aux = remove_inicio(listaDados);
			if(aux == 0) printf("Erro ao remover no inicio!\n");
			else printf("\nValor Removido!\n");
			system("pause");
			system("cls");
			break;
		case 9:
			printf("\n\tRemover Fim\n");
			aux = remove_fim(listaDados);
			if(aux == 0) printf("Erro ao remover no fim!\n");
			else printf("\nValor Removido!\n");
			system("pause");
			system("cls");
			break;
		case 10:
			printf("\n\tRemover Posicao\n");
			printf("Posicao: ");
			fflush(stdin);
			scanf("%d", &pos);
			aux = remove_posicao(listaDados, pos);
			if(aux == 0) printf("Erro ao remover por posicao!\n");
			else printf("\nValor Removido!\n");
			system("pause");
			system("cls");
			break;
		case 11:
			printf("\n\tLiberar Lista\n");
			liberar_lista(listaDados);
			//system("pause");
			//system("cls");
			break;
		default:
			if(op > 11)
			{
				printf("Opcao invalida!\n");
			}
		}
	}
	while(op != 0);
	return 0;
}
