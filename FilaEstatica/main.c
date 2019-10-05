#include "fila.h"

int main(int argc, char** argv)
{
	Fila* filaDados;

	int op, aux, valor;

	filaDados = cria();

	do
	{
		menu();
		printf("Opcao: ");
		scanf("%d", &op);
		system("cls");

		switch(op)
		{
		case 1:
			printf("\n\tInserir\n\n");
			printf("Valor: ");
			fflush(stdin);
			scanf("%d", &valor);
			aux = inserir(filaDados, valor);
			if(aux == 0) printf("Erro na insercao\n\n");
			else printf("Valor inserido!\n");
			system("pause");
			system("cls");
			break;
		case 2:
			printf("\n\tImprimindo todos os valores!\n");
			imprimir(filaDados);
			system("pause");
			system("cls");
			break;
		case 3:
			printf("\n\tVerifica vazia\n\n");
			aux = vazia(filaDados);
			if(aux == 1) printf("A fila esta vazia!\n\n");
			else printf("A fila nao esta vazia!\n");
			system("pause");
			system("cls");
			break;
		case 4:
			printf("\n\tVerifica cheia\n\n");
			aux = cheia(filaDados);
			if(aux == 1) printf("A fila esta cheia!\n");
			else printf("A fila nao esta cheia!\n");
			system("pause");
			system("cls");
			break;
		case 5:
			printf("\t\nTamanho da fila\n\n");
			aux = tamanho(filaDados);
			printf("A fila tem > %d < valor(es)\n", aux);
			system("pause");
			system("cls");
			break;
		case 6:
			printf("\n\tVerifica primeiro da fila\n\n");
			aux = primeiro(filaDados);
			printf("> %d < e o primeiro da fila\n", aux);
			system("pause");
			system("cls");
			break;
		case 7:
			printf("\n\tRemover\n\n");
			aux = remover(filaDados);
			if(aux == 0) printf("Erro na remocao!\n");
			else printf("Valor removido!\n");
			system("pause");
			system("cls");
			break;
		case 8:
			printf("\n\tLiberar fila\n\n");
			libera(filaDados);
			system("pause");
			system("cls");
			break;
		default:
			if(op > 8)
			{
				printf("Opcao invalida!");
				system("pause");
				system("cls");
			}
			break;
		}
	}
	while(op != 0);

	return 0;
}
